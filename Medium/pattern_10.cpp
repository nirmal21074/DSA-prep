#include <iostream>

//     *    
//    * *   
//   * * *  
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * *  
//    * *   
//     *    

using namespace std;
int main(){
    int n;
    cin>>n;
    //for Half-1
    for (int i = 1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int star=1; star<=i;star++){
            cout<<"* ";
        }
        for(int k=1;k<=n-i-1;k++){
            cout<<" ";
        }
        cout<<endl;
    }
    //for Half-2
    for (int i = 1; i<=n; i++)
    {
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int s=1;s<=n-i+1;s++){
            cout<<"* ";
        }
        for(int k=1;k<=i-2;k++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}