#include <bits/stdc++.h>
using namespace std;

int checkIfLetterIsInSubString(string str, char c)
{
    auto l = str.length();
    for (int i = 0; i < l; i++)
    {
        if(str[i]==c)
        return l-i; 
    }
    return -1;
}

/*this function takes a string and creates a substring by adding one letter to it at a time while checking if it is present in substring.
if it is present in the substring, a new substring begins to be created with beginning index as one plus the repeated char*/
auto maxLength(string str)
{
    string subStr="";
    auto res=0;
    auto subStrLength=0;
    for (int i = 1; i <= (str.length());i++)
    {
         subStr+=str[i-1];
         if (subStrLength<subStr.length())
            {
                subStrLength=subStr.length();
            }
         res = checkIfLetterIsInSubString(subStr,str[i]);
         if(res>-1)
          {
            subStr="";
            i=i-res+1;
          } 
    }
    return subStrLength;
}

int main()
{
    cout << "enter a string ";
    string str;
    cin>>str;
    cout<< maxLength(str);
    return 0;
}