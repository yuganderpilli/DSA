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
     k++;
     i++;   
    }else{
        arr[k]=b[j];
     k++;
     j++;
    }

while(i<n1){
    arr[k]=arr[i];
    k++;
    i++;
}
while(j<n2){
    arr[k]=arr[j];
    k++;
    j++;
}

}

}
void mergeSort(int arr[],int start,int end){
 if(start<end){
  int  mid=start + (end - start) / 2;
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
    for(int i=0;i<end+1;i++){
        cout<<arr[i];
    }
}