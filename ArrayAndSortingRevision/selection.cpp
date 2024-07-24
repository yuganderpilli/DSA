#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,45,76,7864,323,43,46,75,8,455,42,53,53};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j])  min =j;
        }
        swap(arr[min],arr[i]);
    }
for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}