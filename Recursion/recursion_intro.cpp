#include<iostream>
using namespace std;
void sample(int k){
    if(k>0){
        if(k==3){
            return ;
        }
        k=k-1;
        cout<<k<< " ";
        sample(k);
        
    }

}

int main(){

sample(11);
}