#include<iostream>
using namespace std;
int main(){
    int num1=8;
    int num2=17;
    int num3=1;
    if(num1>num2 && num1>num3){
        cout<<num1;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2;
    }
    else{
        cout<<num3;
    }
    return 0;
}
