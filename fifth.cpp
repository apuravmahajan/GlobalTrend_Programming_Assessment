#include <bits/stdc++.h>
using namespace std;
/*rotates the array */
void rotate(int arr[], int n, int k)
{
    vector <int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[n-k+i]);
    }
    for (int i = n-k; i > -1; i--)
    {
        arr[i+k]=arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i]=temp[i];
    }
}

int main()
{
    int arr []={0,7,4,5,9,4,78,95};
    int k;
    cout<<"steps: ";
    cin >> k;
    int n = (sizeof(arr)/sizeof(arr[0]));
    rotate(arr,n,k);
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] <<" ";
    }
    
    return 0;
}