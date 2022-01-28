// if number is divisible by 2 then its even
// if not then number is odd

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Any Number\n";
    cin >> num;
    // Taking input from user
    if (num % 2 == 0)
    {
        cout << "Number is Even." << endl;
        }
    else
    {
        cout << "Number is Odd." << endl;
    }

    return 0;
}