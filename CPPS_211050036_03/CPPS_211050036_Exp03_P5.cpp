// In this program i made calculator using switch case
// Basically we have to take operator from user and proceed it via switch cases 
#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    cout << "Choose an operator: + - * /" << endl;
    cin >> op;

    cout << "Enter two Numbers" << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << "Addition : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication : " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Division : " << num1 / num2 << endl;
        break;

    default:
        cout << "Choose appropriate one !!";
    }

    return 0;
}
