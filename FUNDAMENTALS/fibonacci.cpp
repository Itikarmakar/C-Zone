#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=1,z,r=0;
    cin>>n;

    cout<<r<<" "<<sum<<" ";
    while(i<n-1){
        z=r+sum;
        cout<<z<<" ";
        r=sum;
        sum=z;
        i++;
    }
}