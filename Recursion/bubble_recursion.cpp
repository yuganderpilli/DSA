#include <bits/stdc++.h>
using namespace std;
void recursion (int arr[],int end){
    
    if (end<=0) return;
    for(int j=0;j<end-1;j++){
        if(arr[j] <arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    recursion(arr,end-1);
}




int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int n = size;
    // for (int i = 0; i < n - 1; i++)
    // {

    //     for (int j = 0; j < (n - i - 1); j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
recursion(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}