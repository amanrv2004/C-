#include <iostream>
using namespace std;
int main()
{
    int i, r, sum, n;
    for (i = 1; i <= 1000; i++)
    {
        n = i;        
        sum = 0;      
        while (n != 0)
        {
            r = n % 10;    
            sum =sum + r * r * r; 
            n = n/10;     
        }
        if (sum == i)
        {
            cout << i << " is an Armstrong number" << endl;
        }
    }
    return 0;
}