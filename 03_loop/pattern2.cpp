#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
       
        for(int col=0;col<i;col++){
            char d='a'+col;
            cout<<d<<" ";
        }
        cout<<endl;
    }
    // a
    // ab
    // a b c
    // a b c d
    return 0;
}