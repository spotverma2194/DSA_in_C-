#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        char c='a'+row-1;
        for(int col=1;col<=5;col++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}