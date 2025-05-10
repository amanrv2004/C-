#include <iostream>
using namespace std;
int main()
// {
//     int a=5,b=3;
//     int c=a;
//     a=b;
//     b=c;
//     cout<<"SWAPPED numbers are"<<a<<" "<<b<<endl;
// }
//without using third varible
{
    int a=5,b=10;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}