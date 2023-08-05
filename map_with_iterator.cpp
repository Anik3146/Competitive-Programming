#include<iostream>
#include<stdlib.h>
#include<set>
#include<utility>
#include<map>
#include<iterator>

using namespace std;


int main(){

    map<int,string> people;
    people[11]="Mike A";
    people[12]="Mike B";
    people[13]="Mike C";
    cout<<people[11]<<endl<<people[11].size()<<endl;
    for(map<int,string>::iterator i=people.begin();i!=people.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
    //reverse
    for(map<int,string>::reverse_iterator i=people.rbegin();i!=people.rend();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }

    return 0;
}

