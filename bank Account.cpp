
#include <iostream>
using namespace std;

class user{
    double *balance;
public:
    user()
    {
        balance=new double;
    }
    ~user()
    {
        delete balance;
        balance=NULL;
    }
    user(double a)
    {
        balance=new double;
        *balance=a;
    }
    void balance_check()
    {
        cout<<"Balance :"<<*balance<<endl;
    }
    void deposit(double t);
    void withdraw(double x);
    user operator+(user &ob);
};

void user::deposit(double t)
{
    *(this->balance)=*balance+t;
}
void user::withdraw(double x)
   {
        if((*balance-x)>=500)
        *(this->balance)=*balance-x;
        else
            cout<<"You have to keep at least 500 taka in your account"<<endl;
   }

user user::operator+(user &ob)
{
    user temp;
    *(temp.balance)=*balance+*(ob.balance);
    return temp;
}

int main()
{
    user Frist_user(1000);
    Frist_user.deposit(5000);
    Frist_user.withdraw(4000);
    Frist_user.balance_check();
    user Second_user(2000);
    Second_user.deposit(4000);
    Second_user.withdraw(2000);
    Second_user.balance_check();
    user Third_user;
    Third_user=Frist_user+Second_user;
    Third_user.balance_check();
    return 0;
}
