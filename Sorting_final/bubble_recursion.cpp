#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int end){
    if(end<=0) return;
    for(int i=0;i<end;i++){
        for(int j=0;j<(end-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
recursion(arr,end-1);
}
int main(){

 int n=5;
    int arr[n]={9,8,7,56,4};
    recursion(arr,n);
        for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

        }
}