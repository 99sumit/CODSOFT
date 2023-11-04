#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    char o;
    cout<<"Enter the operator : ";
    cin>>o;

    switch(o){
        case '+':
        cout<<"The sum is : "<<(a+b);
        break;

        case '-':
        cout<<"The difference is : "<<(a-b);
        break;

        case '*':
        cout<<"The product is : "<<(a*b);
        break;

        case '/':
        cout<<"The result is : "<<(a/b);
        break;

        default:
        cout<<"Enter a vaild operator.....!!";
    }
}