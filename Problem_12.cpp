#include<bits/stdc++.h>
using namespace std;

string expr;

int is_op(char op){
    if(op=='+' || op=='-' || op=='*' || op=='/' ){
        return 1;
    }
    return 0;
}

int opcheck(){
    int l=expr.length();
    if(is_op(expr[0])){
       return 0;
    }
    if(is_op(expr[l-1])){
       return 0;
    }
    for (int i = 1; expr[i] ;i++){

        if(is_op(expr[i])){
            //cout <<expr[i]<<" In 24 \n";
           if(is_op(expr[i-1]) || expr[i-1] =='(' ){
                //cout <<expr[i]<<" In 26 \n";
                return 0;
           }
        }

        if(is_op(expr[i])){
            //cout <<expr[i]<<" In 32\n";
           if(expr[i+1] ==')' || is_op(expr[i+1])){
                //cout <<expr[i]<<" In 34 \n";
                return 0;
           }
        }
    }
    return 1;
}
//a*(((a+b)+(b*c))

int brcheck(){
    stack<char> br;
    for (int i = 0; expr[i] ;i++){
        if(expr[i]=='('){
            cout <<expr[i]<<" In 47 \n";
            br.push(expr[i]);
        }
        if(expr[i]==')' && br.top()=='('){
            cout <<expr[i]<<" In 51 \n";
            br.pop();
        }
    }
    if(br.size()!=0){
        return 0;
    }else return 1;
}

int main()
{
    cin >>expr;
    if(opcheck() && brcheck() ){
        cout <<"Valid "<<endl;
    }else cout <<"Invalid "<<endl;

    return 0;
}
