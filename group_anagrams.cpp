#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements for group of strings: "<<endl;
    cin>>n;
    vector <string> group(n);

    cout<<"Enter String: "<<endl;
    for(int i=0;i<group.size();i++){
        cin>>group[i];
    }
    vector<vector<string>> result;
    unordered_map<string, vector<string>> m;
 
    for(string s:group){
        string temp =s; 
        sort(s.begin(),s.end());
        m[s].push_back(temp);

    }
    for(auto& [key,value]: m){
        result.push_back(value);
    }
    cout<<"Result: "<<endl;
    for(vector<string> s: result){
        cout<<"[";
        for(string a: s){
            cout<<"["<<a<<"]"<<", ";
        }
        cout<<"]"<<endl;
    }
    return 0;

}