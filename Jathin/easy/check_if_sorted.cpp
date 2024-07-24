#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,5,2,8,21,25,30};
    int size= sizeof(arr)/sizeof(arr[1]);
    int op=(arr[0]>arr[1])?1:0;
    if(op==1){
        for(int i=1;i<size-1;i++){
            if(arr[i]<arr[i+1]){
                cout<<"not in descending order"<<endl;
                break;
            }
        }
    }
    else{
        for(int i=1;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                cout<<"not in ascending order";
                break;
            }
    }
    

}


}