#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid, int r){
    // defining 2 temp arrays
    // array sizes 
    int n1= mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

int i=0;int j=0;
int k=l;
while(i<n1 &&  j < n2){
    if(a[i]<=b[j]){
     arr[k]=a[i];
     
     i++;   
    }else{
        arr[k]=b[j];
     
     j++;
    }
k++;
}

  while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of right[], if any
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }






}
void mergeSort(int arr[],int start,int end){
 if(start<end){
  int  mid=(start + end) / 2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
 }


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