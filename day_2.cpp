#include<iostream>
#include<stack>
#include<string>
#include<sstream>


using namespace std;

bool is_valid(string s){
    stack<char> st;
    for(char c: s){
        if(c=='{' or c=='[' or c=='('  ){
            st.push(c);
        }
        if(c=='}' or c==']' or c==')'){
            
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if((c == ']' && top !='[' )or( c == ')' && top !='(') or (c == '}' && top !='{')){
                return false;
            }

            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string st;
    cout<<"Enter String: "<<endl;
    cin>>st;
    int result = is_valid(st);
    if(result){
        cout<<"String is Valid!";
    }
    else{
        cout<<"String is Not Valid!";
    }

    return 0;
}