#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,5,9,1,3};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}