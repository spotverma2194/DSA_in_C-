#include<iostream>
using namespace std;
int main(){
    long long first=0;
    long long  second=1;
    long long third;
    int length;
    const int mod=1e9+7;
    cin>>length;
    cout<<first<<" "<<second<<" ";
    for(int i=2;i<length-1;i++){
        third=(first%mod+second%mod)%mod;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    return 0;
}