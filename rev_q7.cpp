#include<iostream>
/*
CONSTRUCTORS WITH DEFAULT ARGUMENTS
*/
using namespace std;
class simple{
    int data1,data2;
    public:
    simple(int a,int b=2){
        data1=a;
        data2=b;
    }
    void print_data();
};
void simple::print_data(){
    cout<<"The value of data1 is "<<data1<<" and data2 is "<<data2<<"."<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a and b :"<<endl;
    cin>>a>>b;
    simple s(a,b);
    simple k=simple(a);
    s.print_data();
    k.print_data();
    return 0;
}