#include<iostream> 
using namespace std;
int main(){
    int n;
    cout<<"enter total number of rows";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col1=1;col1<=(n-row);col1++){
            cout<<" ";
        }
        for(int col2=1;col2<=row;col2++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}