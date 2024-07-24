#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int i=0;
    int size = sizeof(arr)/sizeof(arr[1]);
    int j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}