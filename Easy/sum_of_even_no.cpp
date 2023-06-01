#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 1;
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    while(i<=n){
        if(i%2 == 0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"The sum of even numbers till "<<n<<" is:- "<<sum;
}