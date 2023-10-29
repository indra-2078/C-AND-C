#include<bits/stdc++.h>

using namespace std;

int main(){
    int a=0,b=1,c; 
    for(int i=2;i<15;i++){
        
        c=a+b;
        a=b;
        b = c;
        
        cout<<c<<endl;
    }
}