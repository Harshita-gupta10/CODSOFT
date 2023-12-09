#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "This is a simple calculator. \n";
    float num1, num2;
    char operatorr;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number : ";
    cin >> num2;

    cout << "'+' : addition \n"
            "'-' : subtraction \n"
            "'*' : multiplication \n"
            "'/' : division \n";
    cout << "Enter operator : ";
    cin >> operatorr;

    float ans;
    switch (operatorr)
    {
    case '+' :
        ans = num1 + num2;
        break;
    
    case '-' :
        ans = num1 - num2;
        break;
    
    case '*' :
        ans = num1 * num2;
        break;
    
    case '/' :
        ans = num1 / num2;
        break;

    default:
        cout << "Invalid operator";
        break;
    }

    cout << "Answer : " << ans << endl;
    return 0;
}