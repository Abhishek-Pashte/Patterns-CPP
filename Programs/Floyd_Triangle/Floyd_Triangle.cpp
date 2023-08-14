#include<iostream>
using namespace std;

//Using For Loop
void solution1(int n){
    int counter=1;
    int i=0,j=0;
    while(i<n){
        j=0;
        while(j<=i){
            cout<<counter<<" ";
            counter++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//Using While Loop
void solution2(int n){
    int counter=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}
int main(){
    int n=5,counter=1;
    solution1(n);
    solution2(n);
}
