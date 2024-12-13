#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int col1=1;col1<=n-i;col1++){
            cout<<" ";
        }
        for(int col2=1;col2<=(2*i-1);col2++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}