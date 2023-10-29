#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter any two values and it will be intercanged!!"<<endl;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"The interchanged value of first number entered: "<<a<<endl;
    cout<<"The interchanged value of second number entered: "<<b<<endl;
   
    
}