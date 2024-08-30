#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {0,1,1,1,2,2,1,1,0,0,0,1,1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
   for(int i=0;i<(size/2)+1;i++){
    int element = arr[i];
    int count =0;
    for(int j=0;j<size;j++){
        if(element==arr[j]){
            count++;
        }

    }
    if(count>=(size/2)){
        cout<<"majority element "<<element;
        break;
    }
   }
}