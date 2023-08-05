#include<iostream>
using namespace std;

class product
{
    double *price;
    int *quantity;
    string name;
    double total_price;
    double discount;
public :
    product(){
        price = new double;
        quantity = new int;
        total_price = 0;
        discount = 0;
    }
    void Set_name_price_quantity(){
        double d; int x; string s;
        cout << "Enter product's name : ";
        cin >> s;
        cout << "Enter Price : ";
        cin >> d ;
        cout<<"Enter quantity : ";
        cin>> x;
        *price = d;
        *quantity = x;
        name = s;
        total_price = d*x;
    }
    void print(){
        cout << name << "\t" << *price << "\t" << *quantity << "\t" << total_price << endl;
    }

    double total(){
        return total_price;
    }
    double get_discount(){
        return discount;
    }

};

class customer : public product
{
    string customer_name;
    double *balance;
    product *arr[50];
    double Total_price;
public :
    customer()
    {
        balance = new double(0);
        Total_price = 0;
        for(int i=0; i<50; i++){
            arr[i] = new product;
        }
    }
    void Get_name_balance(){
        string s;
        double d;
        cout << "Enter customer's name : ";
        cin >> s;
        cout << "Enter customer's balance :";
        cin>> d;
        customer_name = s;
        *balance = d;
    }
    void Set_data(int n){
        for(int i=0; i<n; i++){
        arr[i]->Set_name_price_quantity();
        Total_price += arr[i]->total();
        }
    }
    void Output(int n, double D){
        for(int i=0; i<n; i++){
            arr[i]->print();
        }
        cout << Total_price << endl;
        //cout << D << endl;
        if(Total_price>=600)D+=0.05;
        D = Total_price * D;
        Total_price -= D;
        cout << "Discount : " << D << endl;
        cout << "Voucher : " << *balance - Total_price << endl;
    }
};

class Member_card_owner_customer : public customer
{
    double discount;
public :
    Member_card_owner_customer(){
        discount = .05;
    }
    double get_discount(){
        return discount;
    }
};

class Employee: public customer
{
    double Discount;
public :
    Employee(){
        Discount = .10;
    }
    double get_Discount(){
        return Discount;
    }
};

void Customer_data()
{
    int n;
    double d;
    customer ob;
    ob.get_discount();
    ob.Get_name_balance();
    cout << "Enter product number : ";
    cin >> n;
    ob.Set_data(n);
    ob.Output(n,d);
}

void Member_card_owner_customer_data()
{
    int n;
    Member_card_owner_customer ob;
    ob.Get_name_balance();
    cout << "Enter number of the product : ";
    cin >> n;
    ob.Set_data(n);
    double d = ob.get_discount();
    ob.Output(n, d);
}
void Employee_data()
{
    int n;
    Employee ob;
    ob.Get_name_balance();
    cout << "Enter number of the product : ";
    cin >> n;
    ob.Set_data(n);
    double d = ob.get_Discount();
    //cout << d << endl;
    ob.Output(n, d);
}

int main()
{
    for(;;){
        cout << "Enter your choice : " ;
        int n;
        cin >> n;
        if(n<=0)break;
        switch(n){
            case 1:Customer_data();break;
            case 2:Member_card_owner_customer_data();break;
            case 3:Employee_data();break;
        }
    }

}
