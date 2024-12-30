#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,13,8,9};
    for(int i=1;i<=5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}