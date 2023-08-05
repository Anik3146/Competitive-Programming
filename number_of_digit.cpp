#include<iostream>
#include<math.h>

using namespace std;

double sum=0.00;

double fact_log(int n)
{
    if(n==0)
        return sum+=log(1);
    else
        {
            sum+=log(n);
            return fact_log(n-1);
        }
}


int main(){

    int n;
    cin>>n;
    cout<<floor(fact_log(n)/log(10))<<endl;

    return 0;
}

