#include <bits/stdc++.h>
using namespace std;

void expdpt(string str){
                  if(str[0] =='C' && str[1] =='S' && str[2] =='E'  ){cout <<"Computer Science & Engineering, ";}
                 else if(str[0] =='I' && str[1] =='C' && str[2] =='E'  ){cout <<"Information & Communication Engineering, ";}
                else if(str[0] =='M' && str[1] =='S' && str[2] =='E'  ){cout <<"Materials Science & Engineering, ";}
                else if(str[0] =='E' && str[1] =='E' && str[2] =='E'  ){cout <<"Electrical and Electronics Engineering, ";}
                else{"Invalid Department, ";}
}


void expyear(char ch){
                  if(ch =='1'){cout <<"1st year, ";}
                 else if(ch =='2'){cout <<"2nd year, ";}
                else if(ch =='3'){cout <<"3rd year, ";}
                else if(ch =='4'){cout <<"4th year, ";}
                else{"Invalid year, ";}
}

void expsemester(char ch){
                  if(ch =='1'){cout <<"1st semester, ";}
                 else if(ch =='2'){cout <<"2nd semester, ";}
                else{"Invalid semester, ";}
}

void expcourse(string str){

                if(str[6] =='1' && str[7] =='1'  ){cout <<"Database Management System, Theory.";}
                else  if(str[6] =='1' && str[7] =='2'  ){cout <<"Database Management System, Lab.";}
                else  if(str[6] =='2' && str[7] =='1'  ){cout <<"Digital Signal Processing, Theory.";}
                else  if(str[6] =='2' && str[7] =='2'  ){cout <<"Digital Signal Processing, Lab.";}
                else  if(str[6] =='3' && str[7] =='1'  ){cout <<"Computer Networking, Theory.";}
                else  if(str[6] =='3' && str[7] =='2'  ){cout <<"Computer Networking, Lab.";}
                else if(str[6] =='4' && str[7] =='1'  ){cout <<"Compiler Design,Theory.";}
                else  if(str[6] =='4' && str[7] =='2'  ){cout <<"Compiler Design, Lab.";}
                else  if(str[6] =='5' && str[7] =='1'  ){cout <<"System Analysis, Theory.";}
                else {cout <<"Invalid Course.";}



}



void expansion(string str)
{

                expdpt(str);
                expyear(str[4]);
                expsemester(str[5]);
                expcourse(str);
}

int main()
{
    string str;
    cin>>str;
    //cout <<str;
    expansion(str);

}
