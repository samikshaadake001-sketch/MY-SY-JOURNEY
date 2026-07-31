#include <iostream>
using namespace std;

int findLength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void copyString(char str[], char copy[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
}

void reverseString(char str[], char reverse[])
{
    int len = findLength(str);

    for (int i = 0; i < len; i++)
    {
        reverse[i] = str[len - 1 - i];
    }

    reverse[len] = '\0';
}

void concatenateString(char str1[], char str2[], char concat[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        concat[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        concat[i] = str2[j];
        i++;
        j++;
    }

    concat[i] = '\0';
}

int main()
{
    char str1[20], str2[20];
    char copy[20], reverse[20], concat[20];
    int choice;

    cout << "Enter First String: ";

    cin>>str1;

    cout << "Enter Second String: ";
  
    cin>>str2;
    do
    {
        cout << "\n===== STRING OPERATIONS MENU =====";
        cout << "\n1. Find Length";
        cout << "\n2. Copy String";
        cout << "\n3. Reverse String";
        cout << "\n4. Concatenate Strings";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nLength of First String = " << findLength(str1);
            cout << "\nLength of Second String = " << findLength(str2) << endl;
            break;

        case 2:
            copyString(str1, copy);
            cout << "\nCopied String = " << copy << endl;
            break;

        case 3:
            reverseString(str1, reverse);
            cout << "\nReversed String = " << reverse << endl;
            break;

        case 4:
            concatenateString(str1, str2, concat);
            cout << "\nConcatenated String = " << concat << endl;
            break;

        case 5:
            cout << "\nExiting Program...";
            break;

        default:
            cout << "\nInvalid Choice! Please try again.";
        }

    } while (choice != 5);

    return 0;
}