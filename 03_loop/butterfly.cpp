#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int trows=n*2-1;
    int tcol=n*2;
    for(int i=1;i<=n;i++){
        for(int col=1;col<=i;col++){
            cout<<"*";
        }
        for(int col=1;col<=(tcol-i*2);col++){
            cout<<" ";
        }
        for(int col=1;col<=i;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=1;row<=n-1;row++){
        for(int col=1;col<=n-row;col++){
            cout<<"*";
        }
        for(int col=1;col<=2*row;col++){
            cout<<" ";
        }
        for(int col=1;col<=n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}