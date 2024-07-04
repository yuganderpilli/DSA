#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int start,int end){
    if(start>=end)return;
    int min = arr[start];
    for(int i=start;i<end;i++){
        if(arr[min]>arr[i]){
            min = i;
        }
    swap(arr[min],arr[start]);
    }
recursion(arr,start+1,end);
}
int main(){

 int n=5;
    int arr[n]={5,4,3,2,1};
    recursion(arr,0,n);
        for(int i=0;i<n;i++){
    cout<<arr[i];

        }
}