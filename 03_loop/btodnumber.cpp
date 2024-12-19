#include<iostream>
 //binary into decimal number
 using namespace  std;
 int main(){
    int num;
    cout<<"enter the binary number= ";
    cin>>num;
    int mul=1;
    int ans=0;
    while(num){
        int digit=num%10;
        ans=ans+digit*mul;
        num=num/10;
        mul=mul*2;
    }
    cout<<ans;
    return 0;
 }