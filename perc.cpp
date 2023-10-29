#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,e;
    cout<<"Calculate your school's exam %(out of 100!!)"<<endl;
    cout<<"Enter marks of maths: ";
    cin>>a;
    cout<<"Enter marks of Kannada: ";
    cin>>b;
    cout<<"Enter marks of Chemistry: ";
    cin>>c;
    cout<<"Enter marks of Physics: ";
    cin>>d;
    cout<<"Enter marks of CS: ";
    cin>>e;
    float f = ((a+b+c+d+e)/500.0) * 100;//dont use 500 use 500.0 for floating divisions because If the sum of the marks (a + b + c + d + e) is less than 500, the division result will be 0, because integer division truncates the decimal part. And when you multiply 0 by 100, you still get 0.// By using 500.0 instead of 500, you're explicitly telling the compiler to treat 500.0 as a floating-point number. As a result, the division operation (a + b + c + d + e) / 500.0 will be floating-point division, and the fractional part will be preserved.
    cout<< f;
}