#include<iostream>
using namespace std;

int main(){
    // int n,i=1,j=1;
    // cin>>n;

    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         if(j<=i-1){
    //         cout<<" ";
    //         j++;
    //         }
    //         else{
    //             cout<<"*";
    //             j++;
    //         }
    //     }
    //     cout<<endl;
    //     i++;
    // }




    // int n,i=1,j=1;
    // cin>>n;

    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         if(j<=n-i+1){
    //         cout<<"*";
    //         j++;
    //         }
    //         else{
    //             cout<<" ";
    //             j++;
    //         }
    //     }
    //     cout<<endl;
    //     i++;
    // }




    int n,i=1,j=1;
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=n){
            if(j<=n-i){
            cout<<" ";
            j++;
            }
            else{
                cout<<"*";
                j++;
            }
        }
        cout<<endl;
        i++;
    }
}