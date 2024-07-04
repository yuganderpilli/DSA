#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int size){
         if(size<=1) return;
insertion(arr,size-1);
    int key = arr[size-1];
    int j=size-2;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;

    }

    arr[j+1]=key;
 
}


int main(){
    int arr[]={5,4,3,2,1};
    int size=5;
    int start =1;
    insertion(arr,5);

 cout<<"sorted"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i];
}
cout<<endl;

}