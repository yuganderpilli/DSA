#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int size =5;
    for(int i=0;i<size;i++){
        int min = i;
        
        for(int j=i;j<size;j++){
            if(arr[min]>arr[j])
swap(arr[min],arr[j]);
        }
    }

for(int i=0;i<size;i++) cout<<arr[i];

}