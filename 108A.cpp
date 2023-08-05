#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char s_min[10],s_hour[10];
    char time[10];
    int h,m,x,y,l=0,r=0;
    cin>>time;
    s_hour[l++]=time[0];
    s_hour[l++]=time[1];
    s_hour[l]='\0';
    s_min[r++]=time[3];
    s_min[r++]=time[4];
    s_min[r]='\0';
    stringstream ob1(s_hour),ob2(s_min),ob3(strrev(s_hour)),ob4(strrev(s_min));
    ob1>>h;
    ob2>>m;
    ob3>>x;
    ob4>>y;
    if(h==23 && m>=x)
    cout<<"00:00"<<endl;
    else if(h>5 && h<10)
        cout<<"10:01"<<endl;
    else if(h>15 && h<20)
        cout<<"20:02"<<endl;
    else if(h==5 && m>=50)
        cout<<"10:01"<<endl;
    else if(h==15 && m>50)
        cout<<"20:02"<<endl;
    else
    {
        if(m>=x)
        {
            h++;
            int temp=h;
            stringstream ob;
            ob<<temp;
            string t=ob.str();
            char n[10];
            if(h<10){
            l=0;
            n[l++]='0';
            n[l++]=t[0];
            n[l]='\0';
            }
            else if(h>=10)
            {
                l=0;
            n[l++]=t[0];
            n[l++]=t[1];
            n[l]='\0';
            }
            stringstream obj(strrev(n));
            int s;
            obj>>s;
            printf("%.2d:%.2d",h,s);
    }
    else
        {
            m=x;
            printf("%.2d:%.2d",h,m);
        }
    }
    return 0;
}

