#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter to find out the total number of multiples of 2,3,5 & 7 :"<<endl;
    cin>>n;
    int c2=0,c3=0,c5=0,c7=0,c6=0,c15=0,c35=0,c14=0,c30=0,c105=0,c70=0,c210=0,c10=0,c21=0,c42=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            c2++;
        if(i%3==0)
            c3++;
        if(i%5==0)
            c5++;
        if(i%7==0)
            c7++;
        if(i%6==0)
            c6++;
        if(i%15==0)
            c15++;
        if(i%35==0)
            c35++;
        if(i%14==0)
            c14++;
        if(i%10==0)
            c10++;
        if(i%21==0)
            c21++;
        if(i%30==0)
            c30++;
        if(i%105==0)
            c105++;
        if(i%70==0)
            c70++;
        if(i%210==0)
            c210++;
        if(i%42==0)
            c42++;
        }
        cout<<"The answer is :"<<((c2+c3+c5+c7)-((c6+c15+c35+c14+c10+c21)-((c30+c105+c70+c42)-c210)))<<endl;

    return 0;
}

