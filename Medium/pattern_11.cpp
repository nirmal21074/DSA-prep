#include <iostream>
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
using namespace std;

int main(){
    int n;
    cin>>n;
    int print=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) print=0;
        else print=1; 
        for(int j=1;j<=i;j++){
            cout<<print<<" ";
            print=1-print;
        }
        cout<<endl;
    }
}