#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number= ";
    cin>>n;
    int rn=0;
    while(n!=0){
        int d=n%10;
        rn=rn*10+d;
        n=n/10;
    }
    cout<<rn;
    return 0;
}