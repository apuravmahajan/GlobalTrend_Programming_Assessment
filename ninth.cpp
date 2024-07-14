#include <iostream>
#include <string>
using namespace std;

 float maxDiff(float arr[], int n)
 {/*it finds out maximum and minumum value in an array and returns their difference*/
    float currValue;
    float max=arr[0];
    float min=arr[0];
    for (int i = 1; i < n; i++)
    {
        currValue=arr[i];
        if(currValue<min) min=currValue;
        else if(currValue>max) max=currValue;
    }
    return max-min;
 }

int main()
{

    float arr[5];
    cout << "Enter 5 numbers " <<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout<<maxDiff(arr, 5);
    return 0;
}