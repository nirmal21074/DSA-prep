#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
#define ll long long

void check()
{
    ll flag = 0;
    for (ll i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        if(s == "RRRRRRRR")
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout<<"R";
    }
    else
    {
        cout<<"B";
    }
}

int main()
{
    ll t;
    cin >>t;
    while (t--)
    {
        check();
        cout<<endl;
    }
    return 0;
}