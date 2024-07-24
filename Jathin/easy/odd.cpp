#include<bits/stdc++.h>
using namespace std;
int main(){


for(int k=3;k<1000;k++){
 bool isPrime=true;
 for(int i=2;i<=sqrt(k);i++){
    if(k%i==0){
        isPrime=false;
        break;
    }
 }
  if(isPrime) cout<<k <<" ";
}

}