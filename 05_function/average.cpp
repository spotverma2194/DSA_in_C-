#include<iostream>
using namespace std;
float average(int n,int a){
    float ans=float (n+a)/2;
    return ans;
}
int main(){
    int num1,num2;
    cout<<"enter the number1= ";
    cin>>num1;
    cout<<"enter the number2= ";
    cin>>num2;
    cout<<average(num1,num2);
    return 0;
}