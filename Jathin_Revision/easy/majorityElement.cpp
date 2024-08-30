#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,4,4,4,2,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = arr[0];
    int value =0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            value +=1;
        }else{
            value -=1;
        }
        if(value == 0){
            
            element = arr[i];
            value=1;
        }
    }
    int count =0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;
        }
    if(count>((size/2))){
        cout<<"majority element "<< element<<endl;
        break;
    }
    }


}