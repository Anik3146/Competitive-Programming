#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<stdlib.h>
#include<sstream>
#include<time.h>
#include<new>

using namespace std;

int main()
{
    int dy=20;
    int dx=10;
    cout<<atan2(dy,dx)<<endl;
    int a=10;
    float b=12.34;
    //for alternate random number generator
    srand(time(0));
    cout<<sqrt(a)<<endl;
    cout<<fabs(-a)<<endl;
    cout<<cos(10)<<endl;
    cout<<sin(10)<<endl;
    cout<<tan(10)<<endl;
    cout<<asin(10)<<endl;
    cout<<acos(10)<<endl;
    cout<<atan(10)<<endl;
    //for dx/dy
    cout<<atan2(12,a)<<endl;
    cout<<floor(b)<<endl;
    cout<<ceil(b)<<endl;
    cout<<log(a)<<endl;
    cout<<log10(a)<<endl;
    //for time header
    cout<<rand()<<endl;
    cout<<(rand()%100)+1<<endl;
    return 0;
}

