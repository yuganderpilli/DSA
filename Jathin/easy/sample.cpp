#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4453,43,23,435,436,3457,42,12,32,12,323,43,6,5687,58};
    int sizes = sizeof(arr)/ sizeof(arr[1]);
    for(int i=0;i<sizes;i++){
        int min = i;
        for(int j=i;j<sizes;j++){
            if(arr[min]>arr[j]) min = j;
        }
    swap(arr[min],arr[i]);
    } 

for(int i=0;i<sizes;i++) cout<<arr[i]<<" ";
}