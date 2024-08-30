#include<bits/stdc++.h>
using namespace std;
int nCr(int row,int col){
    if(col>row) return 1;
    long long res=1;
    for(int i=0;i<col;i++){
        res = res*(row-i);
        res = res / (i+1);
    }
    return res;
}



int main(){
cout<<nCr(5,2);

}