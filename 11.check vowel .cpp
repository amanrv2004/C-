#include <iostream>
using namespace std;
int main()
{
    while(1)
 {
    char c;
    cout<< "Enter the Character: ";
    cin>>c;
    if ( c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"VOWEL"<<endl;
    }
    else{
        cout<<"CONSONANT"<<endl;
    }
 }

}