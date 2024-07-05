#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    int p = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < p)
        {
            count++;
        }
    }

    int p_index = start + count;
    swap(arr[start], arr[p_index]);
    int i = start;
    int j = end;
    while (i < p_index && j > p_index)
    {
        while (arr[i] < arr[p_index])
            i++;
        while (arr[j] > arr[p_index])
            j++;
        if (i < p_index && j > p_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return p_index;
}

void recursion(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    recursion(arr, start, p);
    recursion(arr, p + 1, end);
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;
    recursion(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i];
}