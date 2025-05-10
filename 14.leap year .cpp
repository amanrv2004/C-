#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
    int n;
    cin>>n;
    if(n%4==0 && n%100!=0 || n%400==0)
    {
        cout<<"LEAP YEAR";
    }
    else{
        cout<<"NOT A LEAP YEAR";
    }
    }
}