#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int array[] = {a,b,c};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, array+size);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    cout<<endl;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}