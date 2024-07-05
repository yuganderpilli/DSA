#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void merge(int arr[],int start,int end){

    int mid=(start+end)/2;
    int n1=mid-start+1;
    int n2=end-mid;
    int i=start;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]);
            j++;
        }

    }
    while(i<=mid){
        v.push_back(arr[i]);
        i++;
    }
while(j<=end){
        v.push_back(arr[j]);
        j++;
    }
}
void mergeSort(int arr[],int start,int end){
    if(start>=end) return;
    int mid =(start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
int arr[]={5,43,2,23,42,53,53};
mergeSort(arr,0,6);
for(int i=0;i<7;i++)cout<<v[i]<<",";
}