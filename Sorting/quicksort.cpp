#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
            count++;
    }
    int pivot_index = start + count;
    swap(arr[pivot_index], arr[start]);
    int i = start;
    int j = end;
    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < arr[pivot_index])
        {
            i++;
        }
        while (arr[j] > arr[pivot_index])
        {
            j--;
        }
        if (i<pivot_index & j> pivot_index)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivot_index;
}
void recursion(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int pivot = partition(arr, start, end);
    recursion(arr, start, pivot);
    recursion(arr, pivot + 1, end);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int size = 5;
    recursion(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i];
}