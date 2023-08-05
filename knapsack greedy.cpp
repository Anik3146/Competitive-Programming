
#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int value, weight;
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    int curWeight = 0;
    double finalvalue = 0.0;


    for (int i = 0; i < n; i++)
    {
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main()
{
    Item arr[1000];
    int W;
    cout<<"Enter total weight :"<<endl;
    cin>>W;
    int n,i;
    cout<<"Enter the number of items :"<<endl;
    cin>>n;
    cout<<"Enter values and weights in pair :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Profit "<<i+1<<":";cin>>arr[i].value;
        cout<<"Weight "<<i+1<<":";cin>>arr[i].weight;
    }

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}
