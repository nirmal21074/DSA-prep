#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello World"<<endl;
    // cout<<"This is Nirmal Soni :)";

    // for taking int Inputs:-
    // int a,b;
    // cin>>a>>b;
    // cout<<"The first Var is: "<<a<<endl<<"The Second Var is: "<<b;
    
    // for taking String Inputs:- -> This won't take the strings as input after Space or can space seprated Strings;
    string s;
    // cin>>s;
    // cout<<"The String is:- "<<s;

    // For taking the Entire line as input means the whole space seprated characters the we have to use "getline function" and NOTE It won't pick the next line means in one go with space seprated characters it'll consider that one line only.

    getline(cin,s);
    cout<<"The inputed string is:- "<<s;
    return 0;
}