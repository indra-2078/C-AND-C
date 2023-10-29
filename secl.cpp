#include<iostream>

using namespace std;

int main(){
    int n,b,l,secl;
    cin>>n;
    int a[n];
    
    
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]>a[1]){
        l = a[0];
        secl = a[1];
    }
    else{
        l =a[1];
        secl = a[0];
    }
    for(int i = 2;i<n;i++){
        
        if(a[i]>l){
            
            l = a[i];
        }
        else if(a[i]>secl){
            secl  = a[i];
        }
        
    }
    cout<<l<<"\t"<<secl;
}