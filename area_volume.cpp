#include<iostream>
#define pi 3.1416
using namespace std;

class Shape
{
    double *area;
    double *Volume;
public :
    Shape(){
        area = new double(0);
        Volume = new double(0);
    }
    double get_area(){
        return *area;
    }
    double get_volume(){
        return *Volume;
    }
    void calculate_area_volume(double a){
        *area = (6*(a*a));
        *Volume = (a*a*a);
    }
    void calculate_area_volume(double a, double b){
        *area = 2*pi*a*(a+b);
        *Volume =pi*a*a*b;
    }
};

class Cube : public Shape
{
    double *side;
public :
    Cube(){
        side = new double(0);
        calculate_area_volume(*side);
    }
    Cube(double d){
        side = new double(d);
        calculate_area_volume(*side);

    }
};
class Cylinder : public Shape
{
    double *R;
    double *L;
public :
    Cylinder(){
        R = new double(0);
        L = new double(0);
        calculate_area_volume(*R,*L);
    }
    Cylinder(double a, double b){
        R = new double(a);
        L = new double(b);
        calculate_area_volume(*R, *L);
    }
    Cylinder(Cylinder &ob){
        R = new double(0);
        L = new double(0);
        *R = *ob.R;
        *L = *ob.L;
        calculate_area_volume(*R, *L);
    }
    SetR(double d){
        *R = d;
        calculate_area_volume(*R, *L);
    }
    SetL(double d){
        *L = d;
        calculate_area_volume(*R, *L);
    }
    Cylinder operator +(Cylinder &ob1){
        Cylinder temp;
        temp.SetR(*R + *(ob1.R));
        temp.SetL(*L + *(ob1.L));
        return temp;
    }
};


int main()
{
    Cube ob(10);
    cout << ob.get_area() << endl;
    cout << ob.get_volume() << endl;
    Cylinder bar(2,5);
    cout << bar.get_area() << endl;
    cout << bar.get_volume() << endl;
    Cylinder bar2(bar);
    bar2.SetR(10);
    bar2.SetL(12);
    cout << bar2.get_area() << endl;
    cout << bar2.get_volume() << endl;
    Cylinder bar3;
    bar3 = bar + bar2;
    cout << bar3.get_area() << endl;
    cout << bar3.get_volume() << endl;
    return 0;
}

