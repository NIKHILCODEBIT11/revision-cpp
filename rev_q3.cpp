#include<iostream>
using namespace std;
class calculator;
class complex{
    int a,b;
    /*
    WORKING IF I DECLARE WHOLE CALCULATOR CLASS AS FRIEND OF CLASS COMPLEX
    BUT DOES NOT WORK IF I INDIVIDUALLY DECLARE FUNCTIONS OF CALCULATOR 
    AS FRIEND OF COMPLEX.
    */
    friend class calculator;

    // i can even write as : friend calculator
    
    // friend int calculator::sum_real_complex(complex o1,complex o2);
    // friend int calculator::sum_complex_complex(complex o1,complex o2);
    public:
    void set_data(int n1,int n2){
        a=n1;
        b=n2;
    }
    void get_data(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
class calculator{
    public:
    int sum_real_complex(complex o1,complex o2){
        return o1.a+o2.a;
    }
    int sum_complex_complex(complex o1,complex o2){
        return o1.b+o2.b;
    }
};
int main(){
    complex o1,o2;
    calculator s;
    o1.set_data(2,3);
    o1.get_data();
    o2.set_data(4,5);
    o2.get_data();
    int k=s.sum_real_complex(o1,o2);
    int m=s.sum_complex_complex(o1,o2);
    cout<<"The sum of real part is "<<k<<endl;
    cout<<"The sum of imaginary part is "<<m<<endl;
    return 0;
}