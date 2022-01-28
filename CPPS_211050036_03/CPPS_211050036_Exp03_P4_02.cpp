#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    cout << "Enter your Marks out of 100: " << endl;
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
   int total = mark1 + mark2 + mark3 + mark4 + mark5;
    cout << "Total marks: " << total << endl;
    // float percentage = total/500*100;
    // cout<<"Percentage: "<<percentage<<endl;

    switch (total / 100)
    {
    case 5:

    case 4:
        cout << "Your grade is A" << endl;
        break;
    case 3:
        cout << "Your grade is B" << endl;
        break;
    case 2:
        cout << "Your grade is C" << endl;
        break;
    case 1:
        cout << "Your are Fail !!";
        break;
    }
    return 0;
}