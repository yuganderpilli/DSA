#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int size,int start){
    if(start>=size) return;
    int min = start;
    for(int i=start+1;i<size;i++){
        
        if(arr[i]<arr[min]) {
            min=i;
        }
        
}
swap(arr[min],arr[start]);
    recursion(arr,size,start+1);
}

int main(){
int arr[]={5,4,3,2,1};
int size =5;
int start =0;
recursion(arr,size,start);
for(int i=0;i<size;i++){
    cout<<arr[i];
}
}