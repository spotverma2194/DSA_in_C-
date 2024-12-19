#include <iostream>
using namespace std;
int isevenodd(int num){ //function declare
    if(num%2==0){       //function define
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    int n=isevenodd(num); //function call
    if(n==0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
    return 0;
}