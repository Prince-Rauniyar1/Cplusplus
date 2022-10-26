#include<iostream>

using namespace std;

int main(){
    float n1,n2;
    char op;
    float result;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<endl;
     cout<<"Enter the second number: ";
    cin>>n2;
    cout<<endl;
    cout<<"Enter the operator: ";
    cin>>op;
    
    cout<<endl;
    switch(op){
        case '+':
        result = n1+n2;
        cout<<result<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;
        
        case '*':
        cout<<n1*n2<<endl;
        break;

        case '/':
        result = n1/n2;
        cout<<result<<endl;
        break;

        default: 
        cout<<"Invalid Operator!"<<endl;
    }
    cout<<endl;
    return 0;
}
