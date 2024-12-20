#include<iostream>
using namespace std;
int fibonacci(int n){
    int first=0;
    int second=1;
    int third;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=1;i<=n-2;i++){
        third=first+second;
        first=second;
        second=third;
    }
    return third;
}
int main(){
    int num;
    cin>>num;
    cout<<fibonacci(num);
    return 0;
}