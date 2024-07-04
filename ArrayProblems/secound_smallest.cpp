#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5]={0,3,0,0,1};

    int largest=INT_MIN;
    int secound_largest=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            secound_largest=largest;
            largest = arr[i];
            
        }
        if(arr[i]>secound_largest && arr[i] < largest){
            secound_largest=arr[i];
        }
    }
    cout<<largest<<secound_largest;
}