#include<iostream>
using namespace std;

int main(){
    int n,i=1,r=1;
    cin>>n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<r<<" ";
            r++;
            j++;
        }
        cout<<endl;
        i++;
    }
}