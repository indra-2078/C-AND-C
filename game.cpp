#include<bits/stdc++.h>

using namespace std;

int main(){
    int b,c=0,d;
    srand(time(0));
    d = rand()%101;
    cout<<"guess the number: ";
    
    while(true){
        cin>>b;
        if(b>d){
            cout<<"number is greater!!"<<endl;
            c++;
        }
        if(b<d){
            cout<<"number is Smaller!!"<<endl;
            c++;
        }
        if(b==d){
            cout<<"EXACTLY!!!!!!"<<endl;
            cout<<"you guessed the answer after "<<c<<" attemps";
            return false;
        }
    }
}