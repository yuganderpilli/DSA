#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=0;
    int k=6;
    int sum = arr[i];
    int maxs=0;
    while(j<size){
        while(sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxs=max(maxs,(j-i+1));
        }
            j++;
        if(j<size){
            sum+=arr[j];
        }
    }
    cout<<maxs;
}