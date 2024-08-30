#include<bits/stdc++.h>
using namespace std;
int nCr(int row, int col){
    long long res=1;
    if(row < col) return 1;
        for(int i=0;i<col;i++){
                res = res*(row-i);
                res = res/(i+1);
    }
    return res;
}
int main(){
 int rows=10;
for(int j=0;j<rows;j++){
    for(int i=0;i<=j;i++){
    cout<<nCr(j,i)<<" ";
}
cout<<endl;
}
}