#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int end){
    
    int mid = (start+end)/2;
    int temp[end];
    int i=start;
    int j=mid+1;
    int tracker =0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
        temp[tracker]=arr[i];
        i++;
        }else{
            temp[tracker]=arr[j];
            j++;
        }
    tracker++;
    }
    while(i<=mid){
        temp[tracker]=arr[i];
        i++;
        tracker++;
    }
    while(j<=end){
        temp[tracker]=arr[j];
        j++;
        tracker++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i-start];
    }
}
void mergeSort(int arr[],int start, int end){
  if(start>=end) return ;
    int mid = (start+end)/2;
    mergeSort(arr, start,mid);
    mergeSort(arr, mid+1,end);
    merge(arr, start,end);
} 
int main(){
 int arr[]={5,4,3,2,1};
    int start=0;
    int end=4;
    mergeSort(arr,start,end);
    for(int i=0;i<=end;i++){
        cout<<arr[i];
    }
}