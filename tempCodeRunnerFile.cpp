#include <iostream>
using namespace std;

int main ()
{
    string a,b;

    cout << "Enter two string: ";

    cin >> a;
    cin >> b;

    int count[26] = {0};

    for (int i=0; i<=a.length(); i++)
    {
        count[a[i] - 'a']++;
        count[b[i] - 'a']--;
    }

    for (int i=0; i<26; i++)
    {
        if (count[i] != 0)
        {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}