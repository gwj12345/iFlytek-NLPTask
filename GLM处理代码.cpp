#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    int cnt = 0;
    vector<string>sb;
    while(getline(cin,a)){
        b = a.substr(a.find(".")+1);
        sb.push_back(b);
        cnt++;
    }
    cout<<cnt<<"\n";
    for(string x : sb){
        cout<<x<<"; ";
    }
    return 0;
}

