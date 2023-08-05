#include<iostream>
#include<fstream>
using namespace std;
//global_function_prototype
int get_what_they_want();
void show_the_items(int x);
//main_function
int main()
{
    int what_they_want;
    what_they_want=get_what_they_want();
    while(what_they_want!=4)
    {
        switch(what_they_want)
        {
            case 1:
                   show_the_items(1);
                   break;
            case 2:
                   show_the_items(2);
                   break;
            case 3:
                   show_the_items(3);
                   break;
        }
        what_they_want=get_what_they_want();

    }
    return 0;
}
//get_what_they_want_function
int get_what_they_want()
{
    int choice;
    cout<<"1-Non_effective items"<<endl;
    cout<<"2-harmful items"<<endl;
    cout<<"3-Helpful items"<<endl;
    cout<<"4-Quit"<<endl;
    cin>>choice;
    return choice;
}
//show_the_items_function
void show_the_items(int x)
{
    string name;
    double power;
    ifstream items("items.txt");
    if(x==1)
    {
        while(items >> name>> power)
        {
            if(power==0){
                cout<<name<<' '<<power<<endl;
            }
        }
    }
     if(x==2)
    {
        while(items >> name >>power)
        {
            if(power<0){
                cout<<name<<' '<<power<<endl;
            }
        }
    }
     if(x==3)
    {
        while(items >>name >>power)
        {
            if(power>0){
                cout<<name<<' '<<power<<endl;
        }
    }
}
}
