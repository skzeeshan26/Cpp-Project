#include <iostream>
using namespace std;
int main() {
    double a,b;
    char op;
    cout<<"Enter the opration:- ";
    cin>>a>>op>>b;
    switch (op){
        case '+':
        cout<<"sum is "<<a+b;   \\if user will select addition operator it will perform addition
        break;
        case '-':
        cout<<"sub is "<<a-b;  \\if user will select subtraction operator it will perform subtraction
        break;
        case '*':
        cout<<"mul is"<<a*b;    \\if user will select multiplication operator it will perform multiplication
        break;
        case '/':
        if(b==0) {
            cout<<"number is 0 number is invalid"; 
        }
        else {
        cout<<"div is "<<a/b;     \\if user will select divison operator it will perform division
        }break;
        default: \\if user will type invalid operation
            cout << "Enter a vaild opreation";
        break;
    }
    return 0;
}
