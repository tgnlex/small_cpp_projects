#include<iostream>
using namespace std; 

int main() {
    char op; 
    float num1, num2;

    cout << "Enter an arithmetic operator(+ - * or /)" << endl;
    cin >> op; 
    cout << "Enter two numbers as operands" << endl; 
    cin >> num1 >> num2;

    switch(op) {
         case '+':
                 cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
                 break;
         case '-':
                 cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
                 break;
         case '*':
                 cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
                 break;
         case '/':
                 cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
                 break;
         default: 
                 cout << "ERROR: Unsupported Operation"; 

    }    
    return 0;
}
