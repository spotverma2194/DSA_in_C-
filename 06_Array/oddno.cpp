#include<iostream>
using namespace std;
int main(){
    int arr[6]={6,3,1,7,2,4};
    for(int i=0;i<6;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}