#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if(a>=x && a<y){
	        cout<<"YES"<<endl; //X≤A<Y
	    }
	    else if (x<=a<y){
	        cout<< "NO"<<endl;
	    }
	}
}