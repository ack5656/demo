#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string palindrome;
    cout << "enter the sting: " << endl;
    cin >> palindrome;
    string str2 = palindrome;
    reverse(palindrome.begin(), palindrome.end());

    if (palindrome == str2)
    {
        cout << "the string is a palindrome" << endl;
    }
    else
    {
        cout << "this string is not a palindrome" << endl;
    }
}
// this is the change i did...