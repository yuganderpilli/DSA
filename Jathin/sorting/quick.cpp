#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int i=start;
    int j=end;
    while(i<j){
        while(arr[i]<=pivot && i<=end-1){
            i++;
        }
        while(arr[j]>=pivot && j >= start+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[start],arr[j]);
return j;
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int pIndex = partition(arr,start,end);
        quickSort(arr,start,pIndex-1);
        quickSort(arr,pIndex+1,end);
    }
}


int main(){
    int arr[]={21,30,37,22,26,2,120,57,69};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++) cout<<arr[i]<<endl;
    }


