#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    vector<int> ki;
    long long int x;
    string  s,l,r;
    for (int i=p;i<=q;i++){
        x=pow(i,2);
        s=to_string(x);
        int size=s.size();
 // * Dividing the string into two halves
    l = s.substr(0, size/2);
    r = s.substr(size/2, size);
        int a,b;
        if (l.size()!=0) {
        a=stoi(l);
        b=stoi(r);
        }else{
           b=stoi(r);
           a=0; 
        }
        
        if (a+b==i) {
        ki.push_back(i);
        }
    }
    if (ki.size()==0){
        cout<<"INVALID RANGE";
    }else{
        for (int i=0; i<ki.size(); i++) {
        cout<<ki[i]<<" ";
        }
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

