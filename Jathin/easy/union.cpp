#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 2, 3, 4, 5, 6, 7, 6};
    int brr[] = {1, 3, 8, 9, 10};
    int size_a = sizeof(arr) / sizeof(arr[1]);
    int size_b = sizeof(brr) / sizeof(brr[1]);
    vector<int> crr;
    int i = 0;
    int j = 0;
    while (i < size_a && j < size_b)
    {
        if (arr[i] <= brr[j]) 
        {
            if(crr.size()==0 || crr.back()!=arr[i])
            {
                crr.push_back(arr[i]);
                
            }
            i++;
    }else{
        if(crr.size()==0 || crr.back()!=brr[j])
            {
                crr.push_back(brr[j]);
                
            }
    j++;
    }


    }
    while (i < size_a)
    {
        if (crr.back() != arr[i])
        {
            crr.push_back(arr[i]);
            i++;
        }
    }

    while (j < size_b)
    {
        if (crr.back() != brr[j])
        {
            crr.push_back(brr[j]);
            j++;
        }
    }

    for (auto val : crr)
        cout << val << " ";
}
