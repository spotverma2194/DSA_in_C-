#include<iostream>
using namespace std;
int main(){
    int arr[5]={6,4,12,8,9};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}