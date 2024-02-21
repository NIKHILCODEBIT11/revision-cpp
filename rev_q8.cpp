#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interest_rate;
    float return_value;
    public:
    void show(){
        cout<<"The return value is "<<return_value<<endl;
    }
    bankdeposit(){}
    bankdeposit(int p,int y,float r){
        principal=p;
        years=y;
        interest_rate=r;
        return_value=principal;
        for(int i=0;i<y;i++){
            return_value=return_value*(1+interest_rate);
        }
    }
    bankdeposit(int p,int y,int r){
        principal=p;
        years=y;
        interest_rate=float(r)/100;
        return_value=principal;
        for(int i=0;i<y;i++){
            return_value=return_value*(1+interest_rate);
        }
    }
};
int main(){
    int p,y,r;
    float e;
    cout<<"Enter principal amount number of years and interest rate in float and interest rate in percentage :";
    cin>>p>>y>>e>>r;
    bankdeposit bd1,bd3;
    bd1=bankdeposit(p,y,e);
    bd1.show();
    bankdeposit bd2=bankdeposit(p,y,r);
    bd2.show();
    return 0;
}