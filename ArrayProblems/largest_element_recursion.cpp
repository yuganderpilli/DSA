#include<bits/stdc++.h>
using namespace std;
int recursion(int arr[],int max,int size){
    if(size<0) return max; 
    if(max<arr[size]){

        max=arr[size];
    }

    recursion(arr,max,--size);
}

int main(){


int arr[5]={5,9,3,2,1};
cout<<recursion(arr,0,4);

}