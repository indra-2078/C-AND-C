#include<bits/stdc++.h>
using namespace std;
        int main() {
            bool a = true;
            cout<<"is the total marks same for all subjects(y/n)";
            string v;
            cin>>v;
            if(v=="y"||v=="Y"){
                float C,CS,E,P,K,M,c,cs,e,k,m,p,X;
                cout<<" Enter Marks Obtained In MATHEMATICS : ";cin>>M;
                cout<<"Out of ";cin>>m;
                cout<<" In CHEMISTRY :";cin>>C;
                cout<<"Out of ";cin>>c;
                cout<<" In PHYSICS : ";cin>>P;
                cout<<"Out of ";cin>>p;
                cout<<" In KANNADA :";cin>>K;
                cout<<"Out of ";cin>>k;
                cout<<" In ENGLISH : ";cin>>E;
                cout<<"Out of ";cin>>e;
                cout<<" In COMPUTER SCIENCE : ";cin>>CS;
                cout<<"Out of ";cin>>cs;
                X=(M+CS+C+E+K+P)/(m+cs+c+e+k+p)*100;
                cout<<"Your total percentage is = "<<X<<endl;
        }
        else{
            cout<<"enter total marks: ";
            float z;
            cin>>z;
            a=false;
            float C,CS,E,P,K,M,c,cs,e,k,m,p,X;
                cout<<" Enter Marks Obtained In MATHEMATICS : ";cin>>M;
                cout<<" In CHEMISTRY :";cin>>C;
                cout<<" In PHYSICS : ";cin>>P;
                cout<<" In KANNADA :";cin>>K;
                cout<<" In ENGLISH : ";cin>>E;
                cout<<" In COMPUTER SCIENCE : ";cin>>CS;
               
                X=((M+CS+C+E+K+P)/z)*100;
                cout<<"Your total percentage is = "<<X<<endl;
        }
}