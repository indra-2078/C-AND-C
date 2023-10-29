#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,days,mon,year,b;
    while(true){
        cout<<"here 1 month assumed as 30 days and 1 year assumed as 365 days"<<endl;
        cout<<"Enter total number of days: ";
        cin>>a;
        year = a/365;
        b= a%365;
        mon = b/30;
        days = b%30;
        cout<<year<<" years, "<<mon<<" months, "<<days<<" days."<<endl;
    }
}