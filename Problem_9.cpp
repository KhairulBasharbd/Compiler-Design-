#include <bits/stdc++.h>
using namespace std;
ifstream inFile("in-9.txt");

void check(string s)
{
    vector<string> words;
    string word = "";
    for (auto &&i : s)
    {

        if (i != ' ')
        {

            word = word + i;
        }
        else if (i == ' ')
        {

            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);

    // for (auto &&i : words)
    // {
    //     cout <<i<<endl;
    // }

    if (words.size() == 2)
    {
        
        if(Sub(words[0]) && Verb(words[1]) 
        
        ){

        }
        
        
        //cout << " Hi " << endl;
    }

}

int main()
{
    string s;
    while (getline(inFile, s))
    {
        check(s);
    }

    inFile.close();
    return 0;
}