#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number "<<endl;
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            cout<<"NOT a Prime Number"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Number is Prime"<<endl;
    }
}