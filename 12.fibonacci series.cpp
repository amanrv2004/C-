#include <iostream>
using namespace std;
int main()
{
    int last=0,pre=1,current;
    for (int i = 0; i <=10; i++)
    {
        current=last + pre;
        last=pre;
        pre=current;
        cout<<current<<endl;
    }
}