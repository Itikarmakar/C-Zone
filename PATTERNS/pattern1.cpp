#include<iostream>
using namespace std;

int main(){
    int n,i=1;   //here i denotes row number;i=1 means 1st row
    cin>>n;

    while(i<=n){
        int j=1;  //here j denotes position number;here j=1 means 1st position of that corresponding row.
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }               //output: star pattern where row = column

}