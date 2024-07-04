#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={7,4,3,5,76,3,7,7,4,234,537,75,3,343,53,6,8,6,22,3,23,23};
    int size = sizeof(arr)/sizeof(int);
for(int i=0;i<size;i++){
    for(int j=0;j<(size-i-1); j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}

for(int i=0;i<size;i++)cout<<arr[i]<<" ";


}