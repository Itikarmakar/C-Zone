#include<iostream>
using namespace std;

int main(){
    // int n,sum=1;
    // cout<<"enter the number: ";
    // cin>>n;

    // int i;
    // while(n>0){
    //     i = n%10;
    //     n=n/10;
    //     //sum=sum+i;
    //     sum=sum*i;
    // }
    // cout<<"sum of the digits is: "<<sum<<endl;



    int n,sum=0,pdt=1;
    cout<<"enter the number: ";
    cin>>n;

    int i;
    while(n>0){
        i = n%10;
        n=n/10;
        sum=sum +i;
        pdt=pdt*i;
    }
    cout<<sum<<endl;
    cout<<pdt<<endl;
    cout<<"difference becomes: "<<pdt-sum;


    
}