#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,3,4,5};
    int brr[] = {2,3,4};
    int size_a = sizeof(arr) / sizeof(arr[1]);
    int size_b = sizeof(brr) / sizeof(brr[1]);
    vector<int> crr;
    int i = 0;
    int j = 0;
    while (i < size_a && j < size_b)
    {
        if (arr[i] == brr[j]) 
        {crr.push_back(arr[i]);
                
            i++;
            j++;
    }else if( arr[i]<brr[j]){
        i++;
    }else{
        j++;
    }
          

}
 for (auto val : crr)  cout << val << " ";
}