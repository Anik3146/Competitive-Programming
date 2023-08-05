#include<bits/stdc++.h>
#include<conio.h>

using namespace std ;

int main ()

{   
	int phy ,math ,che,eng ,bio ;
    float percentage ;
    cout<<"Enter the marks of phy :";
    cin>>phy;
    cout<<"Enter the marks of math :";
    cin>>math;
    cout<<"Enter the marks of eng :";
    cin>>eng;
    cout<<"Enter the marks of bio :";
    cin>>bio;
   cout<<"Enter the marks of che :";
    cin>>che;


    int total = phy+math+che+eng+bio ;
    percentage =((total*1.00)/5);

    cout<<"Percentage is : "<<percentage<<" % " ;

    if(percentage<40)
    {
        cout<<" fail";

    }
    else if (percentage >40 && percentage <= 55)
    {
        cout<<" pass and third division ";

    }
  else if (percentage >55 && percentage <=65)
  {
      cout<<" second";

  }
  else if (percentage > 65 && percentage <= 80)
 {
    cout<<" first";

 }
  else if (percentage > 80 && percentage <= 95)
  {
    cout<<" Distunction";

  }
  else if ( percentage >95 && percentage ==100)
    {

    cout<<" extra ordinary ";
   }
   
	getch();
	return 0 ;


}
