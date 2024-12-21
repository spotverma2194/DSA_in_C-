#include<iostream>
using namespace std;
void prime(int n){
    if(n<2){
        return ;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return;
        }
    }
    cout<<n<<" ";
}
int main(){
    int arr[8]={13,4,5,8,2,9,1,23};
    for(int i=0;i<8;i++){
        prime(arr[i]);
    }
    return 0;
}