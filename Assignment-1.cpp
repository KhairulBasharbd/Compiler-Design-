#include <bits/stdc++.h>
using namespace std;

int is_digit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}
int is_letter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}
int is_char(char ch)
{
    if (ch != ' ' && !is_digit(ch) && !is_letter(ch))
        return 1;
    return 0;
}

void count(string ch)
{
    int digit_count = 0, char_count = 0, letter_count = 0, word_count = 1, space_count = 0;
    int i, j;
    for (i = 0; i < ch.length(); i++)
    {

        digit_count = digit_count + is_digit(ch[i]);
        letter_count = letter_count + is_letter(ch[i]);
        char_count = char_count + is_char(ch[i]);

        if (ch[i] == ' ' && (is_digit(ch[i + 1]) || is_letter(ch[i + 1])))
        {
            word_count++;
        }
    }

    cout << "The number of word  " << word_count << endl;
    cout << "The number of letter  " << letter_count << endl;
    cout << "The number of digit  " << digit_count << endl;
    cout << "The number of char  " << char_count << endl;
}

void separate(string str)
{

    cout << "The letters are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (is_letter(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

    cout << "The Digits are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (is_digit(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

    cout << "The other charecters are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (is_char(str[i]))
        {
            cout << str[i] << " ";
        }
    }
}

int main()
{

    int i, j, k, l, m, n;
    //string  text = "Md. Tarek Zaman, part-3, 2011";

    string text;
    ifstream myfile;
    myfile.open("in-1.txt");

    if (!myfile.fail())
    {

        getline(myfile, text);
    }
    cout << text << endl;

    //1. a
    count(text);
    //2. b
    separate(text);

    return 0;
}
