#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> freq(26,0);
    string s1,s2;
    cout<<"Enter first string: "<<endl;
    cin>>s1;
    cout<<"Enter second string: "<<endl;
    cin>>s2;
    
    if(s1.length() != s2.length()){
        cout<<"Strings are not ANAGRAMS."<<endl;
        return 0;
    }

    for(int i=0;i<s1.length();i++){
        freq[s1[i] - 'a']++;
    }
    for(int i=0;i<s2.length();i++){
        freq[s2[i] -'a']--;
    }
    bool is_anagram = true;
    for(int x: freq){
        if(x!=0){
            is_anagram =false;
            break;
        }
    }

    if(is_anagram){
        cout<<"The strings: "<<s1<<" and "<<s2<< " are ANAGRAMS"<<endl;
    }else{
        cout<<"The strings: "<<s1<<" and "<<s2<< " are not ANAGRAMS"<<endl;
    }
    return 0;

}