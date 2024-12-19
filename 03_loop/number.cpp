#include<iostream>
using namespace std; //decimal number to binary number
int main(){
    int n;
    cout<<"enter the number= ";
    cin>>n;
    int mul=1;
    int sum=0;
    while(n){
        int d=n%2;
        sum=sum+d*mul;
        n=n/2;
        mul=mul*10;
    }
    cout<<sum;
    return 0;
}