#include<iostream>
using namespace std;
int main(){
    int arrr[5]={3,13,12,8,4};
    for(int i=0;i<5;i++){
        for(int j=4-i;j>=0;j--){
            cout<<arrr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}