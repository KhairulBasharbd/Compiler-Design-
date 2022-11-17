#include <bits/stdc++.h>
using namespace std;

int Is_oparand(char i)
{
    if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
    {
        return 1;
    }
    return 0;
}

int Is_oparator(char st)
{
    if (st == '+' || st == '-' || st == '*' || st == '/' || st == '%' || st == '^' || st == '=')
    {
        return 1;
    }
    return 0;
}

int Precedence(char ch)
{
    {
        if (ch == '+' || ch == '-')
        {
            return 1; // Precedence of + or - is 1
        }
        else if (ch == '*' || ch == '/')
        {
            return 2; // Precedence of * or / is 2
        }
        else if (ch == '^')
        {
            return 3; // Precedence of ^ is 3
        }
        else
        {
            return 0;
        }
    }
}

void Postfix(string s)
{
    stack<char> sk;
    sk.push('#');
    // cout << sk.top() << endl;
    string out = "";

    for (auto &&i : s)
    {
        if (i == '(')
        {
            sk.push('(');
        }

        else if (i == '^')
        {
            sk.push('(');
        }
        else if (Is_oparand(i))
        {
            out += i;
        }
        else if (Is_oparator(i))
        {
            if (Precedence(i) <= Precedence(sk.top()))
            {
                while (sk.top() != '#' && Precedence(i) <= Precedence(sk.top()))
                {
                    //cout << i << " : top : "<<sk.top()<<" In 70 \n";
                    out += sk.top();
                    sk.pop();
                }
                sk.push(i);
            }
            else
            {
                //cout << i << " In 65 \n";
                sk.push(i);
            }
        }
        else if (i == ')')
        {
            while (sk.top() != '#' && sk.top() != '(')
            {
                out += sk.top();
                sk.pop();
            }
            sk.pop();
        }
    }
    //cout << " In 79 \n";
    while (!sk.empty() && sk.top() != '#')
    {
        // out <<"int 45 \n";
        out += sk.top();
        sk.pop();
    }

    cout << "The postfix Notation is : " << out << endl;
}

int main()
{
    // string s = "(A+B/C*(D+E)-F)";
    string s = "a-(b+c)";
    Postfix(s);

    return 0;
}