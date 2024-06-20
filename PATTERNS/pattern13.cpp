#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // while(i<=n){
    //     int j=1,r=n-i+1;//,z=n-i+1;
    //     while(j<=n+n){
    //         if(j<=n-i+1){
    //         cout<<j<<" ";
    //         }
    //         else if(j<=n){
    //             cout<<"* ";
    //         }
    //         else if(j<=n+i-1){
    //             cout<<"* ";
    //         }
    //         // else if(i==1){
    //         //     cout<<r<<" ";
    //         //     r--;
    //         // }
    //         // else if(i==2){
    //         //     cout<<r<<" ";
    //         //     r--;
    //         // }
    //         // else {
    //         //     cout<<z<<" ";
    //         //     z--;
    //         // }
    //         else{
    //             cout<<r<<" ";
    //             r--;
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
   
    for(int i=1;i<=n;i++){
        int r=n-i+1;
        for(int j=1;j<=n+n;j++){
             if(j<=n-i+1){
            cout<<j<<" ";
            }
            else if(j<=n){
                cout<<"* ";
            }
            else if(j<=n+i-1){
                cout<<"* ";
            }
             else{
                cout<<r<<" ";
                r--;
            }
        }
        cout<<endl;
    }
}