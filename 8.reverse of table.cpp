#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n*10; i >= n; i=i-2)
    {
        cout<< i<<endl;
    }
    
}