#include <bits/stdc++.h>
using namespace std;

int Is_keyword(string s)
{

    vector<string> keyword = {"auto", "double", "int", "struct", "break", "else", "long",
                              "switch", "case", "enum", "register", "typedef", "char",
                              "extern", "return", "union", "const", "float", "short",
                              "unsigned", "continue", "for", "signed", "void", "default",
                              "goto", "sizeof", "voltile", "do", "if", "static", "while"};

    for (auto i : keyword)
    {
        // cout <<s<<" "<<i<<endl;
        if (!s.compare(i))
            return 1;
    }
    return 0;
}

int Is_identifier(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[0] == '_' || (s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
        {
            if (s[i] == '_' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            {
                return 1;
            }
        }
    }
    return 0;
}

int Is_constant(string s)
{
    int c = 0, c1 = 0;

    for (auto &&i : s)
    {
        if (i == '.')
            c++;
    }

    for (auto &&i : s)
    {
        if ((i >= '0' && i <= '9')){
            c1 = 1;
        }
        else{
            c1 = 0;
            break;
        }
    }
    
    if (c == 1 && c1 == 1)
        return 1;
    if (c == 0 && c1 == 1)
        return 2;
    if (c > 1 && (c1 == 1|| c1==0))
        return 3;
}

int Is_operator(string st)
{

    if (st == "<" || st == ">" || st == "!=" || st == "==" || st == "<=" || st == ">=" || st == "+" || st == "-" || st == "*" || st == "/" || st == "%" || st == "^" || st == "=")
        return 1;
    return 0;
}

void Token(string s)
{
    // cout<<Is_keyword(s)<<" in line 23\n";
    if (Is_keyword(s))
    {
        cout << "Keyword \n";
    }
    else if (Is_identifier(s))
    {
        cout << "Identifier \n";
    }
    else if (0 < Is_constant(s) && Is_constant(s) < 3)
    {
        //cout <<Is_constant<<endl;
        if (Is_constant(s) == 1)
            cout << "Float \n";
        else
            cout << "Integer\n";
    }
    else if (Is_operator(s))
    {
        cout <<"Operator \n";
    }
    else
    {
        cout << "Undefined\n";
    }
}

int main()
{

    string s;
    while (cin >> s)
    {
        Token(s);
        // cout<<s<<"\n";
    }

    return 0;
}