#include<iostream>
using namespace std;
int main(){
    int arr[]={8,54,64,76,86,9,9,0,0,0,65,45,0,466,0};
    int size = sizeof(arr)/sizeof(int);
    int temp[size]={0};
 int k=0;
    for(int i=0;i<size;i++){
        
        if(arr[i]!=0){
            
            temp[k]=arr[i];
        k=k+1;
        }
        
        
    }
for(int i=0;i<size;i++){
    cout<<temp[i]<<" ";
}
}