#include<iostream>
using namespace std;
void merge(int a[],int s,int e){
    int mid = (s+e)/2;
    int l1=mid-s+1;
    int l2- e-mid;
    int arr[l1];
    int brr[l2];
    int k = s;
    for(int i=0;i<l1;i++){
        arr[i]=a[k++];
    }
    k=mid+1;
    for(int i=0;i<l2;i++){
        brr[i]=a[k++];
    }
    k=0;
    int i=0;
    int j=0;
    while(i<l1 && j<l2){
        if(arr[i]>brr[j]){
            a[k]=brr[j]
            j++;
        }
        else{
            a[k]=arr[i];
            i++;
        }
        k++;
    }
while(i<l1){
a[k]=arr[i];
            i++;
            k++;
}

while(j<l2){
a[k]=brr[j];
            j++;
            k++;
}



}


void mergeSort(int arr[],int start,int end){
    if(start>end) return;
int mid = (start+end)/2;

mergeSort(arr,start,mid); // sorting left part
mergeSort(arr,mid+1,end); // sorting right part

}

int main(){
int arr[5]={5,4,3,2,1};
int size =5;
mergeSort(arr,0,5);
for(int i=0;i<size;i++){
    cout<<arr[i];
}
}