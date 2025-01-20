#include<iostream>
using namespace std;
int main(){
    int arr[5]={8,4,13,7,5};
    int n=sizeof(arr);
    for(int i=0;i<4;i++){
        int min_index=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
