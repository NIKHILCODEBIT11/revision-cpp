#include<iostream>
class complex{
    int a,b;
    friend void sum_complex(complex,complex);
    public:
    void set_data(int,int);
    void get_data();
};
void sum_complex(complex o1,complex o2){
    complex o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    o3.get_data();
}
int main(){
    complex c1,c2,sum;
    int n1,n2,n3,n4;
    std::cout<<"Enter real part of 1st complex number :";
    std::cin>>n1;
    std::cout<<"Enter imaginary part of 1st complex number :";
    std::cin>>n2;
    std::cout<<"Enter real part of 2nd complex number :";
    std::cin>>n3;
    std::cout<<"Enter imaginary part of 2nd complex number :";
    std::cin>>n4;
    c1.set_data(n1,n2);
    c1.get_data();
    c2.set_data(n3,n4);
    c2.get_data();
    sum_complex(c1,c2);
    return 0;
}
void complex::set_data(int n1,int n2){
    a=n1;
    b=n2;
}
void complex :: get_data(){
    std::cout<<"The complex number is "<<a<<"+"<<b<<"i"<<std :: endl;
}