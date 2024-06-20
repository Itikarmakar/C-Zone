#include<iostream>
using namespace std;

int main(){
    int i=10;
    cout<<(i++)<<endl;  //10, i=11
    cout<<(++i)<<endl;  //12, i=12
    cout<<(i--)<<endl;  //12, i=11
    cout<<(--i)<<endl;  //10, 

    int a,b=1;
    a=10;
    if(++a)
    cout<<b;
    else
    cout<< ++b ;   //b=1

    int a=1,b=2;
    if(a-- >0 && ++b>2){
        cout<< "stage1-inside if ";
    }
    else{
        cout<< "stage2-inside else";
    }
    cout<< a << " "<< b<<endl;

    int number =3;
    cout<< (25*(++number));   //stage1-inside if  0 3


    int a=1;
    int b=a++;
    int c= ++a;
    cout<< b ;
    cout << c;    //1   3
}