// 252,345,22,2332,54345,etc 
#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,o;
    cin>>n;
    o=n;
    while (n!=0)
    {
        r=n%10;
        
        n=n/10;
        sum=sum*10+r;
    }
    if (sum==o)
    {
        cout<<sum<<" is a Palindrom number"<<endl;
    }
    else
        cout<<"NOT Palindrom ";
        return 0;
}