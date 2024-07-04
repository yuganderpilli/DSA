#include<iostream>
using namespace std;
void prints(int count,int N){

if(count<=N){
    cout<<count<<" ";
    count+=1;
    prints(count,N);
}


}


int main(){
prints(1,100);
}