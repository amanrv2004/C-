#include <iostream>
using namespace std;
int main()
{
    int n,fact;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fact = n;
    for (int i = 1; i <n; i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}