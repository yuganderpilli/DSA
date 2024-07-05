#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
    start++;
    end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    reverse(arr,0,2);
    reverse(arr,3,5);
    reverse(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    
    

}