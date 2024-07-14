#include <iostream>
#include <string>
using namespace std;
/*converts number into string then adds individual digits by converting chars in string to int again*/
 int sum(string str)
 {
    int l = str.length();
    int s = 0;
    for (int i = 0; i < l; i++)
    {
        s = s + int(str.at(i)-'0');
    }
       return s;
 }

int main()
{
    int b;
    cout << "Enter number ";
    cin>>b;
    string str=to_string(b);
    cout<<sum(str);
    return 0;
}