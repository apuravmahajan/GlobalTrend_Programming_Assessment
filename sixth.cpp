#include <iostream>
#include <string>
using namespace std;
/*this recursive function returns the factorial of a number*/
 int fact(int a)
 {
    if (a<=1) 
    return 1;
    return a*fact(a-1);   
 }

int main()
{
    int b;
    cout << "Enter number ";
    cin>>b;
    cout<<fact(b);
    return 0;
}