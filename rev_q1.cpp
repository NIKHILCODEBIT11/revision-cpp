#include<iostream>
/*
Entering two complex numbers and adding 
both the complex numbers.
*/
using namespace std;
class complex{
    int a;
    int b;
    public:
    void set_complex(int,int);
    void get_complex();
    void sum(complex,complex);
};
int main(){
    complex o1,o2,o3;
    int a1,a2,b1,b2;
    cout<<"Enter real part of 1st complex number :";
    cin>>a1;
    cout<<"Enter imaginary part of 1st complex number :";
    cin>>b1;
    cout<<"Enter real part of 2nd complex number :";
    cin>>a2;
    cout<<"Enter imaginary part of 2nd complex number :";
    cin>>b2;
    o1.set_complex(a1,b1);
    o1.get_complex();
    o2.set_complex(a2,b2);
    o2.get_complex();
    o3.sum(o1,o2);
    o3.get_complex();
    return 0;
}
void complex::set_complex(int a1,int b1){
    a=a1;
    b=b1;
}
void complex :: get_complex(){
    cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
}
void complex::sum(complex o1,complex o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}