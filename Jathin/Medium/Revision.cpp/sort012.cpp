#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,1,1,2,2,1,1,0,0,0,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high){
        if(arr[mid]==1){
            mid++;
        }
       else if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }
    }
for(auto it:arr){
    cout<<it<<" ";
}
}