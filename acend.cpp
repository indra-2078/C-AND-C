#include<iostream>

using namespace std;

int main(){
    int a1,a2,a3,a4,a5;
    cout<<"Enter size of array: ";    
    cin >> a1;
    a2 =0;
    int a[a1];
    int b[a1];
    cout<<"Enter elements of array to be sorted: ";
    for(int i =0;i<a1;i++){
        cin >> a[i];
    }
    for(int k = 0;k<a1;k++){
        a2 =0;
        for(int j =0;j<a1;j++){
            if(a[k]<a[j]){
                a2++;
            }
        }
        b[a2] = a[k];
    }
    std::cout << "sorted array:(ascending order): ";
    for(int g = 0;g<a1;g++){
        
        cout<<b[g]<<" ";
    }

}