#include<iostream>
#include<math.h>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;

struct Point{
    int x,y;

}point[100];

bool cmp(Point A,Point B)
{
    if(A.x<B.x) return 1;
    if(A.x>B.x) return 0;
    if(A.y<B.y) return 1;
    if(A.y>B.y) return 0;
    return 0;
}

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>point[i].x>>point[i].y;
    }
    sort(point,point+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<point[i].x<<" "<<point[i].y<<endl;
    }
    return 0;
}

