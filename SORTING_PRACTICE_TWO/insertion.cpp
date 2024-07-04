#include<bits/stdc++.h>
using namespace std;
int main(){
    //  array declaration 
    int arr[]={5,4,3,2,1};
    int size = 5;
 for(int i=0;i<size;i++){
    cout<<arr[i];
}
cout<<endl;
    for(int i=0;i<size;i++){
        int j=i-1;
        int key = arr[i];
        while(j>=0 && key < arr[j]){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }

for(int i=0;i<size;i++){
    cout<<arr[i];
}
cout<<endl;
}