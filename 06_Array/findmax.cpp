#include<iostream>
using namespace std;
int main(){
    int arr[6]={4,7,11,9,32,4};
    int lar=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    cout<<lar;
    return 0;
}