#include<iostream>
using namespace std;

class user{
	double *money;
	public:
		user()
		{
			money=new double;
		}
		~user()
		{
			delete money;
			money=NULL;
		}
		void get_x(double a)
		{
			money=new double;
			*money=a;
		}
		void show_x()
		{
			cout<<*money<<endl;
		}
		user operator+(user &ob1);
};

user user::operator+(user &ob1)
{
	user temp;
	*(temp.money)=*money+*(ob1.money);
	return temp;

}

int main()
{
	user *obj[10];
	double x;
	int i;
	cout<<"Enter 10 data :"<<endl;
	for(i=0;i<10;i++)
    {
        obj[i]=new user();
    }
	for(i=0;i<10;i++)
	{
		cin>>x;
		obj[i]->get_x(x);
	}
	user ob;
	ob.get_x(0.00);
	for(i=0;i<10;i++)
	{
		ob=ob+*obj[i];
	}
	cout<<"The sum is :";
	ob.show_x();

	return 0;
}

