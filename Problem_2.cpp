#include<bits/stdc++.h>
using namespace std;

int Is_vowel(auto ch){
    if(ch =='a' || ch == 'e'  || ch =='i' || ch == 'o' || ch=='u' || ch =='A' || ch == 'E'  || ch =='I' || ch == 'O' || ch=='U') return 1;
    return 0;
}

int Is_consonant(auto ch)
{
    if(( ch >='a' && ch <= 'z' || ch >='A' && ch <= 'Z' ) && !Is_vowel(ch)) return 1;
    return 0;
}

void Count(string s){

    int cvow = 0, ccons=0;

    for (auto i : s)
    {
        if(Is_vowel(i)){
            cvow++;
        }

        if(Is_consonant(i)){
            ccons++;
        }
    }

    cout <<"The number of vowel is "<<cvow<<endl;
    cout <<"The number of consonant is "<<ccons<<endl;
    
}

 void SeparateVowel(auto s){

    cout << "The Vowels are ";
    for (auto i : s)
    {
        if(Is_vowel(i)){
            cout <<i<<" ";
        }
    }
}

void SeparateConsonant(auto s){
    cout << "\nThe Consonants are ";
    for (auto i : s)
    {
        if(Is_consonant(i)){
            cout <<i<<" ";
        }
    }

}

void WordSeparate(string s){
    vector <string> str,vowelstr,consonantstr;
    string word = "";

    for(auto i : s)
    {
        if( i!=' '){
            word += i;
        }else if(i==' ' && (i+1)!=' '){
            str.push_back(word);
            word = "";
        }
    }
    str.push_back(word);

    for (auto &&i : str)
    {
        //for (auto &&j : i)
        //{
            if(Is_vowel(i[0])){
                vowelstr.push_back(i);
            }
            else if(Is_consonant(i[0])){
                consonantstr.push_back(i);
            }   
        //}
    }
    cout <<"\nStarted with vowel words are : ";
    for (auto &&i : vowelstr)
    {
        cout <<i<<" ";
    }
    cout <<"\nStarted with consonant words are : ";
    for (auto &&i : consonantstr)
    {
        cout <<i<<" ";
    } 
}


int main()
{
    string s = "Munmun is the student of Computer Science & Engineering";

    Count(s);
    SeparateVowel(s);
    SeparateConsonant(s);
    WordSeparate(s);


    return 0;
}