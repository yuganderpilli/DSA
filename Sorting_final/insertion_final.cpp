#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[]={7,4,3,5,76,3,7,7,4,234,537,75,3,343,53,6,8,6,22,3,23,23};
    int size = sizeof(arr)/sizeof(int);
for(int i=1;i<size;i++){
    int j=i-1;
    int key = arr[i];
    while(j>=0 && key < arr[j]){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]=key;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

}