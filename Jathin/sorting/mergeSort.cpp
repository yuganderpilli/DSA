#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int end,int mid){
    vector<int> brr(end - start + 1);
int left = start;
int right=mid+1;
int k=0;
while(left<=mid && right<=end){
    if(arr[left]<=arr[right]){
        brr[k]=arr[left];
        left++;    
    }else{
        brr[k]=arr[right];
        right++;
    }
    k++;
}

       while(left<=mid){
        brr[k]=arr[left];
        left++;
        k++;
       }

while(right<=end){
    brr[k]=arr[right];
    right++;
    k++;
}
for(int i=start;i<=end;i++){
    arr[i]=brr[i-start];
}

}
void mergeSort(int arr[],int start,int end){
    if(start>=end) return;
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end,mid);

}


int main(){
    int arr[]={21,30,37,22,26,2,120,57,69};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
        for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    }


