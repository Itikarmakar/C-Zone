#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"enter the range:";
    cin>>n;
    
    while(i<=n){
        cout<<i<<" ";
        i++;
    }                //output:print 1 to n numbers



    int n,i=1,sum=0;
    cout<<"enter the range:";
    cin>>n;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"the sum of the numbers is:"<<sum;   //output:print sum of n numbers



    int n,i=1;
    cout<<"enter the range:";
    cin>>n;

    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }               //output:print 2 to n even numbers



    int n,i=1,sum=0;
    cout<<"enter the range:";
    cin>>n;

    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }            
    cout<<"sum of the even numbers is: "<<sum<<endl;   //output:sum of 2 to n even numbers



    int n,i=2,r;
    cout<<"enter the number: ";
    cin>>n;

    while(i<n){
        if(n%i==0){
        cout<<"not prime";
        i=n;
        }
        else if(n%i!=0){
        i++;
        r=i;
        }
    }
    if(r==n){
        cout<<"prime";
    }                   //output:check number prime or not
    
}
