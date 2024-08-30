#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int start,int mid,int end){
int c=0;
int n1= start;
int n2= mid+1;
while(n1<=mid && n2<=end){
    if(arr[n1]>arr[n2]){
        c+=(mid-n1+1);
        n2++;
    }else{
        n1++;
    }

}
return c;


}
int mergeSort(int arr[],int start,int end){
int count=0;
if(start>=end){ return count ;}
int mid = (start+end)/2;
mergeSort(arr,0,mid);
mergeSort(arr,mid+1,end);


 count += merge(arr,start,mid,end);
return count;
}
int main(){
 int arr[] = {5,3,2,4,1};
int sizea=sizeof(arr)/sizeof(arr[0]);
cout<<mergeSort(arr,0,sizea-1);

}