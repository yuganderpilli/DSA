#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,2,4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[1]);
    int k = 8;
    map<int,int> sample;
    for(int i=0;i<size-1;i++){
        int value = k-arr[i];
        if(sample.find(value)!=sample.end()){
            cout<<value<<arr[i]<<" "<<endl;
            
        }else{

            sample[arr[i]]=i;    
        }

    }


}