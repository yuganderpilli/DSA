#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,3,0,7,99,45,0,4,0,0,0,5,6,7,0};
    int size= sizeof(arr)/sizeof(arr[1]);
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
           
        }
        else if (arr[i]>secondLargest && arr[i]<largest)
        {
            secondLargest=arr[i];
        }
    }
cout<<largest<<" "<<secondLargest;

}