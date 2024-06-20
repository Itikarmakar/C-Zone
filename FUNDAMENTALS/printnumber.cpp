#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int n,ans=0,digit;
    // cin>>n;

    // while(n!=0){
    //     digit=n%10;
    //     n=n/10;
    //     ans=(ans*10)+digit;
    // }
    // cout<<ans<<endl;        //this will print reverse of the entered number as the variable digit stored the digit in reverse




     int n,ans=0,digit,i=0;
    cin>>n;

    while(n!=0){
        digit=n%10;
        n=n/10;
        ans=(digit*pow(10,i))+ans;
        i++;
        cout<<digit<<endl;
    }
     cout<<ans<<endl; 
}