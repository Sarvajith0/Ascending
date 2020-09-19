#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {93,84,97,98,100,78,86,100,85,92,55,91,90,75,94,83,60,81,95,66};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    sort(arr, arr+n);

    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
  
    return 0;
} 
