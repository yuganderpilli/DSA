#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int size){
    if(size<=0) return;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    recursion(arr,size-1);
}
int main(){
 int arr[]={5,4,3,2,1};
    int size =5;
    recursion(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i];
}
}