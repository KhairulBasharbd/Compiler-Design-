#include<bits/stdc++.h>
using namespace std;


vector<pair<string,string>> g={{"S","S+S"},{"S","S*S"},{"S","S/S"},{"S","S-S"}};

int main(){

    string input,str="";
    cin >> input;

    for(int i=0; i<input.length(); i++){

        str+=input[i];


        //shifting
        if(str[str.size()-1]>='a' && str[str.size()-1]<='z'){
            str[str.size()-1]='S';
        }

        //reducing
        for(auto j:g){
            if(str.compare(j.second)==0){
                str=j.first;
            }
        }

        if(i == input.length()-1 && str=="S"){
            cout <<"Accepted \n";
            return 0;
        }



    }

    cout <<"Rejected \n";

}








//I am tring this section of code
/*#include <bits/stdc++.h>
using namespace std;

char startSymbol;
map<string, char> productionRule;
stack<char> stk, ipstk;

void insertProdcution(string prod)
{
    productionRule.insert({prod.substr(3), prod[0]});
}

int top_1(stack<char> t){
    //char x;
   // x=t.top();
    t.pop();
    if(t.top() == '$') return 0;
    return 1;
}

void check(string ipstring)
{
    stk.push('$');
    ipstk.push('$');

    int ln = ipstring.length();
    for (int i = ln; i >= 0; i--)
    {
        ipstk.push(ipstring[i]);
    }
    // bool x = stk.top() != startSymbol && top_1(stk);
    // cout <<x;
    // while(stk.top() != startSymbol && top_1(stk)){


    // }



    // while (!ipstk.empty())
    // {
    //     cout << ipstk.top() << " ";
    //     ipstk.pop();
    // }
}

int main()
{
    cout << "Enter the number of Producation: \n";
    int numberOfProduction;
    //char startSymbol;
    cin >> numberOfProduction;

    for (int i = 1; i <= numberOfProduction; i++)
    {
        string proRule;
        cin >> proRule;
        if(i==0){
            startSymbol=proRule[0];
        }
        insertProdcution(proRule);
    }

    // for (auto i : productionRule)
    // {
    //     cout <<i.first<<" "<<i.second<<endl;
    // }

    cout << "Enter the input string: \n";
    string ipstring;
    cin >> ipstring;

    check(ipstring);

    return 0;
}*/
