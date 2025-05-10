// 153 =  1^3+5^3+3^3 =1+125+27 = 153 , Armstrong Number

#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,t;
    cin>>n;
    t=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (t==sum)
    {
         cout<<"Armstrong Number  ";
    }
    else
    {
        cout<<"NOT Armstrong Number ";
    }
}

    
   