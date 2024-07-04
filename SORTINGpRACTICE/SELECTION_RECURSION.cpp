#include<iostream>
using namespace std;
void selection (int arr[],int size,int start){
    if(start  >= size) return;
    int min = start;
    for(int i=start;i<size;i++){
        if(arr[min]> arr[i]){
            min = i;
        }
    
    }
    swap(arr[min],arr[start]);

selection(arr,size,start+1);
}
int main(){
    int arr[]={5,4,3,2,1};
    int size =5;
    int start =0;
    selection(arr,size,start);
    for(int i=0;i<size;i++) cout<<arr[i];
}