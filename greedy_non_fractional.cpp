
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    double total=0.0,temp;
    double weight,w,v,profit=0.0;
    map<double,double> m1;
    map<double,double> :: iterator itr;
    cout<<"Enter weight :"<<endl;
    cin>>weight;
    cout<<"Enter the number of items :"<<endl;
    cin>>n;
    cout<<"Enter weight and values :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>w>>v;
        if(weight>=w)
        m1.insert(pair<double,double>(w,v));
        total+=w;
        profit+=v;
    }
     if(weight>=total)
        cout<<"Profit :"<<profit<<endl;
     else
     {
         double great=profit;
         profit=0;
         while(weight>0)
         {
             double low=great;
             temp=-100;
             for(itr=m1.begin();itr!=m1.end();itr++)
             {
                 if((itr->second > temp) && (itr->first <= weight) && (low > itr->first))
                 {
                     temp=itr->second;
                     low=itr->first;
                 }
             }
             if(temp<0)
                break;

            for(itr=m1.begin();itr!=m1.end();itr++)
            {
                if((*itr).second == temp && (itr->first==low))
                {
                    weight-=itr->first;
                    profit+=itr->second;
                    m1.erase(itr->first);
                    break;
                }

            }
         }
         cout<<"Remaining weight :"<<weight<<endl;
         cout<<"MAX profit :"<<profit<<endl;
     }



    return 0;
}

