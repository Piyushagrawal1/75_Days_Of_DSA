#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size)
{
    int length = 0;
    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}

void reverseCharArray(char ch[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main()
{
    char ch[100];
    // cin >> ch;
    cin.getline(ch, 100);
    cout << "before: " << ch << endl;
    int len = findLength(ch, 100);
    cout << "length: " << len << endl;
    reverseCharArray(ch, len);
    cout << "after: " << ch << endl;

    // int len = findLength(ch, 100);
    // cout << "length is: " << len << endl;
    // cout << "printing length via strlen: " << strlen(ch) << endl;
    return 0;
}