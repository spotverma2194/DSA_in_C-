#include<iostream>
using namespace std;
int main(){
    int num=41;
    if(num%7==0 || num%11==0){
        cout<<"Perfect";
    }
    else{
        cout<<"not perfect";
    }
    return 0;
}