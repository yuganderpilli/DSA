#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,1,1,1,2,2,3,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);
   int j=1;
   for(int i=0;j<size;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j]; 
        }
        
   }
for(auto it:arr){
    cout<<it<<" ";
}
}