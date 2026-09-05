#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
    vector<string> v(5);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    map<string, int> counter;
    for(string s: v){
        if(counter.count(s) ==0){
            counter[s]=1;
            continue;
        }
        counter[s]++;
    }

    for( auto& [key, val]:counter){
        cout<<key<<": "<<val<<endl;
    }

    return 0;
}