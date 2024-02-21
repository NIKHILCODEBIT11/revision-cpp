#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sum_real_complex(complex,complex);
    int sum_complex_complex(complex,complex);
};
class complex{
    private:
    int a,b;
    friend int calculator::sum_real_complex(complex,complex);
    friend int calculator::sum_complex_complex(complex,complex);
    public:
    void set_complex(int a1,int a2){
        a=a1;
        b=a2;
    }
    void get_complex(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator::sum_real_complex(complex o1,complex o2){
    return o1.a+o2.a;
}
int calculator::sum_complex_complex(complex o1,complex o2){
    return o1.b+o2.b;
}
int main(){
    int a1,a2,a3,a4;
    cout<<"Enter a1 : ";
    cin>>a1;
    cout<<"Enter a2 : ";
    cin>>a2;
    cout<<"Enter a3 : ";
    cin>>a3;
    cout<<"Enter a4 : ";
    cin>>a4;
    complex o1,o2;
    o1.set_complex(a1,a2);
    o1.get_complex();
    o2.set_complex(a3,a4);
    o2.get_complex();
    calculator c1;
    int k=c1.sum_real_complex(o1,o2);
    cout<<"The sum of real part is "<<k<<endl;
    int k1=c1.sum_complex_complex(o1,o2);
    cout<<"The sum of imaginary part is "<<k1<<endl;
    return 0;
}