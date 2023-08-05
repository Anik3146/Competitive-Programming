#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

vector<char>set_1;
vector<char>set_2;
vector<char>set_1S;
vector<char>set_2S;
vector<char>sym;
vector<char>card;
int s,i,j,k,flag=0,sum=0;

void cardinality()
{
    for(i=0;i<set_1.size();i++)
    {
        if(set_1.empty()){
            card.push_back(0);
            break;
        }
        else if(card.empty())
            card.push_back(set_1[i]);
        else
        {
            for(j=0;j<card.size();j++)
            {
                if(set_1[i]==card[j])
                    flag=1;
            }
            if(flag==0)
                card.push_back(set_1[i]);
            else
                flag=0;
        }

    }
    cout<<"Cardinality of set 1 :"<<card.size()<<endl;
    card.clear();
    for(i=0;i<set_2.size();i++)
    {
        if(set_2.empty()){
            card.push_back(0);
            break;
        }
        else if(card.empty())
            card.push_back(set_2[i]);
        else
        {
            for(j=0;j<card.size();j++)
            {
                if(set_2[i]==card[j])
                    flag=1;
            }
            if(flag==0)
                card.push_back(set_2[i]);
            else
                flag=0;
        }
    }
        cout<<"Cardinality of set 2 :"<<card.size()<<endl;
}
void symmetric_difference()
{
    for(i=0;i<set_1.size();i++)
    {
        for(j=0;j<set_2.size();j++)
        {
            if(set_1[i]==set_2[j])
                flag=1;
        }
        if(flag==0)
        {
            sym.push_back(set_1[i]);
        }
        else
            flag=0;
    }
    for(i=0;i<set_2.size();i++)
    {
        for(j=0;j<set_1.size();j++)
        {
            if(set_2[i]==set_1[j])
                flag=1;
        }
        if(flag==0)
        {
            sym.push_back(set_2[i]);
        }
        else
            flag=0;
    }
    if(sym.empty())
    {
        cout<<"{}"<<endl;
    }
    else
    {
        cout<<"Symmetric difference between set 1 & set 2 is :{";
        for(i=0;i<sym.size();i++)
        {
            if(i<(sym.size()-1))
            cout<<sym[i]<<",";
            else
            cout<<sym[i]<<"}"<<endl;
        }

    }
}

void equality()
{
    for(i=0;i<set_1.size();i++)
    {
        if(set_1.empty()){
            break;
        }
        else if(set_1S.empty())
            set_1S.push_back(set_1[i]);
        else
        {
            for(j=0;j<set_1S.size();j++)
            {
                if(set_1[i]==set_1S[j])
                    flag=1;
            }
            if(flag==0)
                set_1S.push_back(set_1[i]);
            else
                flag=0;
        }
    }
    sort(set_1S.begin(),set_1S.end());
    for(i=0;i<set_2.size();i++)
    {
        if(set_2.empty()){
            break;
        }
        else if(set_2S.empty())
            set_2S.push_back(set_2[i]);
        else
        {
            for(j=0;j<set_2S.size();j++)
            {
                if(set_2[i]==set_2S[j])
                    flag=1;
            }
            if(flag==0)
                set_2S.push_back(set_2[i]);
            else
                flag=0;
        }
    }
        sort(set_1S.begin(),set_1S.end());
    if(set_1S.size()==set_2S.size())
    {
        for(i=0;i<set_1S.size();i++){
            for(j=0;j<set_2S.size();j++)
            {
                if(set_1S[i]==set_2S[j])
                    sum++;
            }
        }
        if(sum==set_1S.size())
            cout<<"Equal!"<<endl;
        else
            cout<<"Not Equal!"<<endl;
    }
    else
        cout<<"Not Equal"<<endl;
    sum=0;

}
void input()
{
    char ch;
    cout<<"Enter the elements of set 1 :"<<endl;
    for(;;)
    {
        cin>>ch;
        if(ch=='{')
            continue;
        else if(ch=='}')
                break;
        else
            set_1.push_back(ch);
    }
    cout<<"Enter the elements of set 2 :"<<endl;
    for(;;)
    {
        cin>>ch;
        if(ch=='{')
            continue;
        else if(ch=='}')
                break;
        else
            set_2.push_back(ch);
    }
}

int main()
{

    cout<<"Press any key to get corresponding set operations :"<<endl;
    cout<<"\n1.Symmetric Difference\n2.Cardinality\n3.Equality\n4.New Input\n5.Exit"<<endl;
    for(;;)
    {
        cin>>s;
        switch(s)
        {
            case 1: symmetric_difference();
                    break;
            case 2: cardinality();
                    break;
            case 3: equality();
                    break;
            case 4:
                        if(!set_1.empty())set_1.clear();
                        if(!set_2.empty())set_2.clear();
                        if(!set_1S.empty())set_1S.clear();
                        if(!set_2S.empty())set_2S.clear();
                        if(!card.empty())card.clear();
                        if(!sym.empty())sym.clear();
                        input();
                        break;

            case 5: return 0;

        }
    }
    return 0;
}

