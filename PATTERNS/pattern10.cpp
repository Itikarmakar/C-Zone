#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1;
    cin>>n;
    int a=64+n;
    char ch=a;

    while(i<=n){
        j=1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
        ch=ch-j;
    }
}