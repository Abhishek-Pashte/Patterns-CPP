#include<iostream>
using namespace std;
//Binomial Coefficient
int nCr(int n,int r){
    int result=1;
    if(r>n-r){
        r=n-r;
    }
    for(int i=0;i<r;i++){
        result*=(n-i);
        result/=(i+1);
    }
    return result;
}
void pascalTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    pascalTriangle(n);
}
