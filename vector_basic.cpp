#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for(unsigned int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<vec.at(2)<<endl;
    vec.push_back(4);
    cout<<vec[3]<<endl;
    vec.insert(vec.begin(),0);
    for(unsigned int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    vec.insert(vec.begin()+5,5);//vec.begin starts from 0 index
    for(unsigned int i=0;i<vec.size();i++)//size is similar to array
    {
        cout<<vec[i]<<" ";
    }
     cout<<endl;
    vec.erase(vec.begin()+1);
    for(unsigned int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    if(vec.empty())
    {
       cout<<"Empty"<<endl;
    }
    else
       cout<<"Not Empty"<<endl;
    vec.clear();
    if(vec.empty())
    {
       cout<<"Empty"<<endl;
    }
    else
       cout<<"Not Empty"<<endl;
    cout<<"Sum of all the elements are:"<<endl;
    cout<<accumulate(vec.begin(),vec.end(),0);
    return 0;
}
