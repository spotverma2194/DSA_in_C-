#include<iostream>
using namespace std;
int main(){
    int first=0;
    int second=1;
    int third;
    int length;
    cin>>length;
    cout<<first<<" "<<second<<" ";
    for(int i=1;i<length-1;i++){
        third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
    return 0;
}