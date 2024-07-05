#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1};

    for (int i = 0; i <= 4; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    int j = 4;
    int m = 0;
    int k = 3;

    while (k > 0)
    {

        int temp = arr[m];
        for (int i = (m + 1); i <= 4; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[j] = temp;

        k--;
    }

    for (int i = 0; i <= 4; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}