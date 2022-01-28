// In this program we have to compare three numbers
// Using grater than or smaller than
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter Three Numbers to find Greatest one" << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "Maximum Number: " << num1;
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num1)
        {
            cout << "Maximum Number: " << num2;
        }
    }
    else if (num3 > num2)
    {
        if (num3 > num1)
        {
            cout << "Maximum Number: " << num3;
        }
    }

    return 0;
}