#include<iostream>
using namespace std;
void checkprime(int n){
    if(n<2){
        cout<<"Not a prime number";
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number";
            return;
        }
    }
    cout<<"Prime number";
}
int main(){
    int num;
    cin>>num;
    checkprime(num);
    return 0;
}