#include<iostream>

using namespace std;

int main(){
    int a,temp,b,c;
    cin>>a;
    int ar[a];
    for(int i =0;i<a;i++){
        cin>>ar[i];
    }
    for(int i = 1;i<a;i++){
        for(int j = 0;j<a-i;j++){
            if(ar[j]<ar[j+1]){//replace "<" to ">" to reverse order
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    for(int k =0;k<a;k++){
        cout<<ar[k]<<"<";
    }
}