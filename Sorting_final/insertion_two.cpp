#include<bits/stdc++.h>
using namespace std;
void recursion(int arr[],int start,int  end){
if (start>=end) return;

int j = start-1;
int key = arr[start];
while(j>=0 && key < arr[j]){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=key;
  for(int i=0;i<end;i++){
    cout<<arr[i]<<" ";

}
cout<<"key"<<" " <<key;  
cout<<endl;
recursion(arr,start+1,end);
}
int main(){
  int arr[]={7,4,3,5,76,3,3,23};
    int size = sizeof(arr)/sizeof(int);
      for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    
}  
cout<<endl;
    recursion(arr,1,size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    
}  
cout<<endl;
     
}