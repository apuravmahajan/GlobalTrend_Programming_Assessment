#include <iostream>
#include <string>
using namespace std;

 string checkForAlphabet(string text)
 {/*creates a counter for alphabets, then checks if total number of alphabets is equal to length of string*/
    int c=0;
    int l=text.length();
    for (int i = 0; i < l; i++)
    {
        char x = text.at(i);
        int t=int(x);
        if ((t>64&&t<91)||(t>96&&t<123))
        {
            c+=1;
        }
    }

    if (c==l) return "True";
    else return "False";
 }

int main()
{
    string text;
    cout << "Enter a string: " <<endl;
    cin >> text;
    cout<<checkForAlphabet(text);
    return 0;
}