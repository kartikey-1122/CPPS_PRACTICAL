#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter any Character" << endl;
    cin >> character;
    cout << "Character: " << character << endl;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' ||
        character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        cout << "The character you have enterd is Vowel";
    }
    else if (character >= 97)
    {
        if (character <= 122)
        {
            cout << "The character is CONSONANT";
        }
    }
    else if (character >= 65)
    {
        if (character <= 90)
        {
            cout << "The character you have entered is CONSONANT but in UpperCase";
        }
    }
    else if (character >= 48)
    {
        if (character <= 57)
        {
            cout << "The character you have entered is DIGIT";
        }
    }
    else
    {
        cout << "Special Character !!";
    }

    return 0;
}