#include <iostream>
using namespace std;
int main() {
    double a,b;
    char op;
    cout<<"enter the opration:- ";
    cin>>a>>op>>b;
    switch (op){
        case '+':
        cout<<"sum is "<<a+b;
        break;
        case '-':
        cout<<"sub is "<<a-b;
        break;
        case '*':
        cout<<"mul is"<<a*b;
        break;
        case '/':
        if(b==0) {
            cout<<"number is 0 number is invalid";
        }
        else {
        cout<<"div is "<<a/b;
        }break;
    }
    return 0;
}
