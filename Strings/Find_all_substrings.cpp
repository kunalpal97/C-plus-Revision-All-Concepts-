#include<bits/stdc++.h>

using namespace std;


vector<string> solve(string s){

    vector<string> ans;

    int n = s.length();

    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){

            ans.push_back(s.substr(i , j-i+1));
        }
    }

    return ans;
}


int main(){

    string s;
    cout << "Enter a String :";
    getline(cin , s);

    vector<string> ans = solve(s);

    for(auto s:ans){
        cout << s <<" ";
    }

    return 0;


    






}