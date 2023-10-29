#include<iostream>

using namespace std;

int main(){
    int num,sum,temp,a;
    // cin>>num;
    for(long int i = 0;i<99999;i++){
        sum =0;
        num = i;
        temp = i;
        do{
            a = temp%10;
            sum = sum+(a*a*a);
            temp = temp/10;
        }while(temp!=0);
        if(num == sum){
            cout<<num<<endl;

        }
        // else{
        //     cout<<"not arm";
        // }

    }
}