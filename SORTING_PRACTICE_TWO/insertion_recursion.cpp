#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int size){
    if(size <=1) return;
    recursion(arr,size-1);
        int key = arr[size-1];
        int j=size-2;
        
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
    arr[j+1]=key;
    
    
}
int main(){
    //  array declaration 
    int arr[]={5,4,3,2,1};
    int size = 5;
    recursion(arr,size);
    for(int i=0;i<size;i++){
    cout<<arr[i];
}
 cout<<endl;
 
    }