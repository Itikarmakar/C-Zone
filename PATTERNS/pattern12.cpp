#include<iostream>
using namespace std;

int main(){
    int n,i=1,c=0;
    cin>>n;
    int coloumn=n+n-1;

    while(i<=n){
        int j=1,r=1;
        while(j<=coloumn){
            if(j<=n-i){
                cout<<" ";
            }
            else if(j<=n){
                cout<<r;
                r++;
            }
            else if(j<=n+i-1){
                cout<<c;
                c--;
            }
            else{
                cout<<" ";
            }
            j++;
         }
        c=c+i;
        i++;
        cout<<endl;
    }
}