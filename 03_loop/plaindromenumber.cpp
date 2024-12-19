#include<iostream>
using namespace std;
    //check given number is plaindrome or not
int main(){
    int num;
    cout<<"enter the number= ";
    cin>>num;
    int rnum=0;
    int n=num;
    while(num){
        int d=num%10;
        rnum=rnum*10+d;
        num=num/10;
    }
    if(n==rnum){
        cout<<"Plaindrome number";
    }
    else{
        cout<<"Not plaindrome number";
    }
    return 0;
}