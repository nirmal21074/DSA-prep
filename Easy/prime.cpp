#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<"Not prime for"<<i<<endl;
        }
        else{
            cout<<"prime for"<<i<<endl;
        }
        i++;
    }
}