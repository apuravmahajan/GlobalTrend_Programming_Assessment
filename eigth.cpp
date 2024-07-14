#include <iostream>
#include <string>
using namespace std;

 int gcd(int a, int b)
 {/*greatest common divisor*/
    int c;
    int d=min(a,b);
    int f=max(a,b);
    c=f%d;
    while (c!=0)
    {
        f=d;
        d=c;
        c=f%d;
    }
    return d;
 }

int main()
{
    int a;
    int b;
    cout << "Enter numbers ";
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}