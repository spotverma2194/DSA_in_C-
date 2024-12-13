#include<iostream>
using namespace std;
int main(){
    int year=1900;
    if(year%400==0){
        cout<<"Leap year";
    }
    else if(year%4==0 && year%100!=0){
        cout<<"Leap year";
    }
    else{
        cout<<"NOt a Leap year";
    }
    return 0;
}