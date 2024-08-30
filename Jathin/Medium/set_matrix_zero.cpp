#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4][4]={1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0};
int n=4;
int col0=1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==0){
            arr[i][0]=0;
            if(j!=0){
                arr[0][j]=0;
            }else{
                col0=0;
            }
        }
    }
}
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[i][j]!=0){
            if(arr[0][j]==0 || arr[i][0]==0){
                arr[i][j]=0;
            }
        }
    }
}

if(arr[0][0]==0){
    for(int i=0;i<n;i++) arr[0][i]=0;
}
if(col0==0){
    for(int i=0;i<n;i++) arr[i][0]=0;
}


for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

}


    

