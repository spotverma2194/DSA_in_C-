#include<iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col1=1;col1<row;col1++){
            cout<<" ";
        }
        for(int col2=row;col2<=5;col2++){
            cout<<col2;
        }
        cout<<endl;
    }
    return 0;
}