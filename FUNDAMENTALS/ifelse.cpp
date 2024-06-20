# include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter number A: ";
    cin>>a;
    cout<<"enter number B: ";
    cin>>b;
    if(a>0)
        cout<< "A is positive"<<endl;
        else if(a==0)
        cout<< "A is zero"<<endl;
        else
        cout<< "A is negative"<<endl;
        if(b>0)
        cout<<"B is positive"<<endl;
        else if(b==0)
        cout<<"B is zero"<<endl;
        else
        cout<<"B is negative"<<endl;  //output:number is positive/negative/zero
    
    
    
    int a=2;
    int b=a+1;

    if((a=3)==b)
    cout<<a;
    else
    cout<<a+1;  //output:3

    
    
    int a=24;
    if(a>20)
    cout<<"Love";
    else if (a==24)
    cout<<"Lovely";
    else
    cout<<"Babbar";
    cout<< a;  //output:love
    
    
    
    char ch;
    cout<<"enter a character: ";
    cin>>ch;

    if(ch>='0'&&ch<='9') //if('0'<=ch<='9')
        cout<<"numeric";
    else if(ch>='a'&&ch<='z')
        cout<<"lowercase";
    else if(ch>='A'&&ch<='Z')
        cout<<"uppercase";  //output:numeric/uppercase/lowercase

}