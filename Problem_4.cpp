#include<bits/stdc++.h>
using namespace std;

ifstream inFile("in-4.txt");
ofstream outFile("out-4.txt");

void Invalid(){

}

void Check(string s){

    int ln = s.length();
    bool c = false;

    if(s[0]>='i' && s[0]<='n' || s[0]>='I' && s[0]<='N'){

        for (auto i: s)
        {
            if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')){
                c = true;
            }
            else{
                outFile<<s <<" : Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
           outFile<<s <<" : Integer Variable \n";
        }
    }
    
    else if (s[0]>='1' && s[0]<='9' && ln<=4){

        for (auto &&i : s)
        {
            if(i>='0' && i<='9'){
                c = true;
            }
            else{
                outFile<<s <<" : Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
            outFile<<s <<" : Short Integer Number\n";
        }
        

    }
    
    else if (s[0]>='1' && s[0]<='9' && ln>4){

        for (auto &&i : s)
        {
            if(i>='0' && i<='9'){
                c = true;
            }
            else{
                outFile<<s <<" : Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
            outFile<<s <<" : Long Integer Number \n";
        }

    }
    
    else{
        outFile<<s <<" : Invalid Input \n";
    }
}


int main()
{
    string s;
    while(getline(inFile,s)){

        int ln = s.length();

        Check(s);
    }
    inFile.close();
    outFile.close();
    return 0;
}