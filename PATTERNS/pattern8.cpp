#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1;
    cin>>n;

    while(i<=n){
        int r=j;
        j=1;
        while(j<=i){
            cout<<r<<" ";
            r--;
            j++;
        }
        cout<<endl;
        i++;
    }
}