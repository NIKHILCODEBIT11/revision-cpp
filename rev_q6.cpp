#include<iostream>
#include<math.h>
using namespace std;
class point{
    private:
    friend float distance(point,point);
    int x;
    int y;
    public:
    point(int,int);
    void display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};
point::point(int a,int b){
    x=a;
    y=b;
}
float distance(point,point);
int main(){
    int a1,a2,a3,a4;
    cout<<"Enter x coordinate of 1st point : ";
    cin>>a1;
    cout<<"Enter y coordinate of 1st point : ";
    cin>>a2;
    cout<<"Enter x coordinate of 2nd point : ";
    cin>>a3;
    cout<<"Enter y coordinate of 2nd point : ";
    cin>>a4;
    point a(a1,a2);
    point b=point(a3,a4);
    cout<<"The distance between both the points is "<<distance(a,b)<<endl;
    return 0;
}
float distance(point o1,point o2){
    float r=pow(o1.x-o2.x,2.0);
    float q=pow(o1.y-o2.y,2.0);
    float e=r+q;
    return sqrt(e);
}