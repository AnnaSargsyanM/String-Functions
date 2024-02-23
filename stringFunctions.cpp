//     This program shows the size, numbers of letter, digits, numbers of lower
//     and upper case letters, last character, character at index 16, index of
//     the first and second 'a' of the string.
//
//****************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

void displayStringInfo(const string&);

//****************************************************************************************************

int main()
{
    string words = "This is a 101 SAMPLE to demonstrate string processing";
    displayStringInfo(words);

    return 0;
}

//****************************************************************************************************

void displayStringInfo(const string& words) 
{
    cout << "Size of the string: " << words.size() << endl;

    int numLetters = 0;
    int numDigits = 0;
    int numLowercase = 0;
    int numUppercase = 0;

    int indexFirstA = -1;
    int indexSecondA = -1;

    for (int i = 0; i < words.size(); i++)
    {
        char c = words[i];

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            numLetters++;
            if (c >= 'a' && c <= 'z')
            {
                numLowercase++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                numUppercase++;
            }
        }
        else if (c >= '0' && c <= '9')
        {
            numDigits++;
        }

        if (c == 'a' && indexFirstA == -1)
        {
            indexFirstA = i;
        }
        else if (c == 'a')
        {
            indexSecondA = i;
        }
    }
   

    cout << "Number of letters: " << numLetters << endl;

    cout << "Number of digits: " << numDigits << endl;

    cout << "Number of lowercase letters: " << numLowercase << endl;

    cout << "Number of uppercase letters: " << numUppercase << endl;

    if (words.size() > 16) 
    {
        cout << "Character at index 16: " << words[16] << endl;
    }
    else 
    {
        cout << "No character was found at index 16." << endl;
    }

    if (!words.empty()) 
    {
        cout << "Last character: " << words.back() << endl;
    }
    else 
    {
        cout << "The string is empty." << endl;
    }

    if (indexFirstA != -1) 
    {
        cout << "Index of the first 'a': " << indexFirstA << endl;
    }
    else 
    {
        cout << "No 'a' found in the string." << endl;
    }

    if (indexSecondA != -1) 
    {
        cout << "Index of the second 'a': " << indexSecondA << endl;
    }
    else 
    {
        cout << "No second 'a' found in the string." << endl;
    }
}

//****************************************************************************************************
/*
Size of the string: 53
Number of letters: 42
Number of digits: 3
Number of lowercase letters: 35
Number of uppercase letters: 7
Character at index 16: M
Last character: g
Index of the first 'a': 8
Index of the second 'a': 32
*/
