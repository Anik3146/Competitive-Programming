#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    double total=0.0,temp;
    double weight,w,v,profit=0.0;
    map<double,double> m,m1;
    map<double,double> :: iterator itr;
    cout<<"Enter weight :"<<endl;
    cin>>weight;
    cout<<"Enter the number of items :"<<endl;
    cin>>n;
    cout<<"Enter weight and values :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>w>>v;
        m.insert(pair<double,double>(w,v));
        m1.insert(pair<double,double>(w,v/w));
        total+=w;
        profit+=v;
    }
    if(weight>=total)
        cout<<"Profit :"<<profit<<endl;
    else
    {
        profit=0.00;
        while(weight>0.00)
        {
             temp=-100;
            for(itr=m1.begin();itr!=m1.end();itr++)
            {
                if(itr->second > temp)
                    temp=itr->second;
            }
            for(itr=m1.begin();itr!=m1.end();itr++)
            {
                if(itr->second == temp)
                {
                    if(itr->first <= weight)
                    {
                        profit+=(itr->first)*(itr->second);
                        weight=weight-(itr->first);
                        m1.erase(itr->first);
                        break;
                    }
                    else
                    {
                        profit+=weight*(itr->second);
                        weight=0.00;
                        break;
                    }
                }
            }
        }
        cout<<"Remaining weight :"<<weight<<endl;
        cout<<"Profit :"<<profit<<endl;
    }

    return 0;
}
