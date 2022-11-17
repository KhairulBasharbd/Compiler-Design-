#include<bits/stdc++.h>
using namespace std;

vector<string> tree(50, "                                ");
string expr;
int is_op(char op){
    if(op=='+' || op=='-' || op=='*' || op=='/' ){
        return 1;
    }
    return 0;
}

void syntaxTree(string in){
    int r=0,c=2;
    for(int i=0; i<in.length(); i++){

        if(is_op(in[i])){
            tree[r][c]=in[i];
            tree[r+1][c-1]='/';
            tree[r+1][c+1]='\\';
            tree[r+2][c-2]=in[i-1];

            r+=2;
            c+=2;
        }
    }
    tree[r][c]=in.back();
}




int main(){

    string input;
    cin>>input;

    syntaxTree(input);

    for(auto i:tree){
       cout<<i<<endl;
    }



}


