#include<bits/stdc++.h>
using namespace std;

ifstream inFile("in-5.txt");

void Check(string s){

    cout <<s<<" : ";

    int ln = s.length();

    //cout<<s[ln-3]<<endl;
    bool c = false;
    bool c1=false;
    int podot = 1000000;
    /*
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
        

    }*/

    // Check Float Number
    if(s[0]=='0' && s[1]=='.' && (s[2]>='0' && s[2] <='9') && (s[3]>='0' && s[3] <='9') && ln<=4){
        cout<<"Float Number \n";
    }

    // Check Float Number
    else if((s[0]>='1' && s[0]<='9') && s[ln-3]=='.' && (s[ln-2]>='0' && s[ln-2] <='9') && (s[ln-1]>='0' && s[ln-1] <='9')){
        
        for (int i=0; i<ln-3; i++)
        {
            //cout <<"In 42 line\n";
            if(s[0]>='0' && s[0]<='9'){
                c = true;
            }
            else{
                cout<<"Invalid Input \n";
                c = false;
                break;
            }
        }
        if(c){
            cout<<"Float Number \n";
        }
    }
        

    else if(s[0]=='0' && s[1]=='.' && ln>=5){
        for (int i=2; i<ln; i++)
        { 
            if(s[i]>='0' && s[i]<='9'){
                cout<<"Double Number \n";
                break;
            }
            
        }
    }

   else if(s[0]>='1'&& s[0]<='9' && ln>=5){

        for (int i=0; i<ln; i++)
        {
            if(s[i]=='.'){
                podot = i;
            }
        }
        for (int i=0; s[i]!='.'; i++)
        {
            if((s[i]>='0' && s[i]<='9')){
                
                c = true;
            }
            else {
                c = false;
                cout<<"Invalid Input \n";
                break;

            }
        }
        if(c){
            
            //cout<<"In line 97 "<<podot<<" ";
            for (int i=podot+1; i<ln; i++)
            {   
                if((ln-podot) >= 3 && (s[i]>='0' && s[i]<='9')){
                    c1=true;
                }
                else{
                    cout<<"Invalid Input \n";
                    c1=false;
                    break;
                }
            }
            if(c1){

                cout<<"Double Number \n";
            }
        }
    }

    else{

        cout<<"Invalid Input \n";
    }


}





int main(){

    string s;
    while(getline(inFile,s)){

        //cout <<s<<" : ";
        Check(s);
        //cout<<endl;
    }


    inFile.close();
    return 0;
}