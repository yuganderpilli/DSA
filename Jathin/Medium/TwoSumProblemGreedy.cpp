#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 14;
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[j] + arr[i] < k)
        {
            i++;
        }
        else if (arr[i] + arr[j] > k)
        {
            j--;
        }
        else
        {
            cout << arr[i] << " " << arr[j];
            break;
        }
    }
}
