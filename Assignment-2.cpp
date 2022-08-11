#include<bits/stdc++.h>
using namespace std;

int is_vowel(char ch)
{
    if(ch =='a' || ch == 'e'  || ch =='i' || ch == 'o' || ch=='u' || ch =='A' || ch == 'E'  || ch =='I' || ch == 'O' || ch=='U') return 1;
    return 0;
}

int is_consonant(char ch)
{
    if(( ch >='a' && ch <= 'z' || ch >='A' && ch <= 'Z' ) && !is_vowel(ch)) return 1;
    return 0;
}


void count(string str)
{
    int cvow = 0, ccons=0;
    for(int i =0; i<str.length(); i++)
    {
        cvow  = cvow + is_vowel(str[i]);
        ccons  = ccons + is_consonant(str[i]);

    }
    //cout <<str.length()<<endl;
    cout <<"The number of vowel is "<<cvow<<endl;
    cout <<"The number of consonant is "<<ccons<<endl;

}

void separate(string str)
{

    cout << "The Vowels are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (is_vowel(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

    cout << "The Consonants are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (is_consonant(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

}

/*void word(string str)
{
    char word[20][20];
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            for (int j = 0; j < str.length(); j++)
            {
                word[][]
                k++;
            }
        }
    }

}*/



int main()
{

    string text;

    ifstream myin("in-2.txt");
    if(!myin.fail())
    {
        getline(myin,text);
    }
    cout <<text<<endl;
    // 2. a
    count(text);
    // 2. b
    separate(text);
    // 2. c
   // word(text);


}
