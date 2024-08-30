#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1, 0, 2, 1, 0, 2, 1, 0, 0, 2, 1, 1, 0, 2, 0, 1, 2, 0, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=0;
    int k=size-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
         else if(arr[j]==1){ 
            j++;
        }
        else if(arr[j]==2){
            swap(arr[j],arr[k]);
            k--;
        }
    }
for(int i=0;i<size;i++)
cout<<arr[i]<<" ";

}