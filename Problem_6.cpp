#include<bits/stdc++.h>
using namespace std;

ifstream inFile("in-6.txt");

void Check(string s){

    bool c = false;
    //
    if(s[0]=='c' && s[1]=='h' && s[2]=='_' && ((s[3]>='a' && s[3]<='z') || (s[3]>='A' && s[3]<='Z') || (s[3]>='0' && s[3]<='9'))){
        for (int i=4; i<s.length(); i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){

                c = true;
            }
            else{
                cout<<"Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
            cout<<"Character variable \n";
        }
        

    }

    else if(s[0]=='b' && s[1]=='n' && s[2]=='_' && ((s[3]>='a' && s[3]<='z') || (s[3]>='A' && s[3]<='Z') || (s[3]>='0' && s[3]<='9'))){
        for (int i=4; i<s.length(); i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){

                c = true;
            }
            else{
                cout<<"Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
            cout<<" Binary variable \n";
        }
        

    }

    else if(s[0]=='0' && (s[1]=='0' || s[1]=='1')){
        for (int i=2; i<s.length(); i++)
        {
            if(s[i]=='0' || s[i] =='1'){
                c = true;
            }
            else {
                c = false;
                cout<<"Invalid Input \n";
                break;

            }
        }
        if(c){
            cout<<"Binary Number \n";
        }
    }

    else{

        cout<<"Invalid Input \n";
    }


}





int main(){

    string s;
    while(getline(inFile,s)){


        Check(s);
    }


    inFile.close();
    return 0;
}