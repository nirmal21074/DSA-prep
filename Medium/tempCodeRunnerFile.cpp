#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if(a>=x && a<=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<< "NO"<<endl;
	    }
	}
}