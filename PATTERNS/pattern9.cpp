#include<iostream>
using namespace std;

int main(){
    // int n,i=1,j=1,a='A';
    // char ch=a;
    // cin>>n;

    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //     ch++;
    // }





    int n,i=1,j=1,a='A';
    cin>>n;
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
    }




    // int n,i=1,j=1,a='A';
    // char ch=a;
    // cin>>n;

    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
}