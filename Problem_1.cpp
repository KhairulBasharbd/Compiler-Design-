#include<bits/stdc++.h>
using namespace std;

int Is_digit(char c){
    if(c >= '0' && c <='9'){

        return 1;
    }else return 0;

}

int Is_letter(char c){
    if(c >= 'a' && c <='z' || c >= 'A' && c <='Z'){

        return 1;
    }else return 0;

}

int Is_otherchar(char c){
    if(!Is_digit(c) && !Is_letter(c) && c != ' '){

        return 1;
    }else return 0;

}


void Count(string s){

    vector <string> words;
    string word = "";
    int digit_count = 0, otherchar_count = 0, letter_count = 0, word_count = 1, c = 0;


    for(int i =0; i<s.length(); i++){

        

        if(Is_digit(s[i])){

            digit_count++;
        }

        if(Is_letter(s[i])){

           letter_count++;
        }

        if(Is_otherchar(s[i])){

           otherchar_count++;
        }

        if( s[i]!=' '){

            word = word + s[i];
            
        }else if(s[i-1]!=' ' && s[i]==' ' && s[i+1]!=' '){

            words.push_back(word);
            word = "";
        }
    }
     words.push_back(word);


    cout <<"The number of word "<< words.size()<<endl;
    cout <<"The number of letter "<<letter_count<<endl;
    cout <<"The number of digit "<<digit_count<<endl;
    cout <<"The number of Other character "<<otherchar_count<<endl;
}


void Seperate(string str){

    cout << "The letters are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (Is_letter(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

    cout << "The Digits are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (Is_digit(str[i]))
        {
            cout << str[i] << " ";
        }
    }
    cout << "\n";

    cout << "The other charecters are ";
    for (int i = 0; i < str.length(); i++)
    {
        if (Is_otherchar(str[i]))
        {
            cout << str[i] << " ";
        }
    }
}


int main(){

    string s="Md. Tarek Zaman, part-3, 2011";


    Count(s);
    Seperate(s);

}