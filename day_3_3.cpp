#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter name: "<<endl;
    getline(cin, s);

    if (s.find(" world") != string::npos) {
        cout << "Found at index: " << s.find(" world") << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    return 0;

}