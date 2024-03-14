#include <iostream>

using namespace std;

int CountWords(const char* s)
{
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r')
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
    }

    return wordCount;
}

int main()
{
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH + 1];

    cout << "Enter string:" << endl;
    cin.getline(s, MAX_LENGTH);

    cout << "The string has " << CountWords(s) << " words" << endl;
    return 0;
}
