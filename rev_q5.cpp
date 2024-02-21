#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void swap(c1 &,c2 &);
    public:
    void set_data(int a){
        val1=a;
    }
    void get_data(){
        cout<<"The value of private variable of c1 class is "<<val1<<endl;
    }
};
class c2{
    int val2;
    public:
    friend void swap(c1 &x,c2 &y);
    void set_data(int a){
        val2=a;
    }
    void get_data(){
        cout<<"The value of private variable of c2 class is "<<val2<<endl;
    }
};
void swap(c1 &x,c2 &y){
    int t=x.val1;
    x.val1=y.val2;
    y.val2=t;
}
int main(){
    int a,b;
    cout<<"Enter value of private variable for c1 : ";
    cin>>a;
    cout<<"Enter value of private variable for c2 : ";
    cin>>b;
    c1 c;
    c2 v;
    c.set_data(a);
    c.get_data();
    v.set_data(b);
    v.get_data();
    swap(c,v);
    c.get_data();
    v.get_data();
    return 0;
}