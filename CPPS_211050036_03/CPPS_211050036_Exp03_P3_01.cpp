// Using ascii value we can find type of any key on keyboard
#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter any character: " << endl;
    cin >> character;
    cout << "Character: " << character << endl;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout << "The character you have entered is VOWEL";
    }
    else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        cout << "The character you have enterd is VOWEL but in UpperCase";
    }
    else if (character >= 97 && character <= 122)
    {
        cout << "The character you have entered is CONSONANT";
    }
    else if (character >= 65 && character <= 90)

        cout << "The character you have entered is CONSONAT but in Uppercase";
    else if (character >= 48 && character <= 57)
    {
        cout << "The Character you have entered is DIGIT";
    }
    else
    {
        cout << "Special case !!";
    }

    return 0;
}