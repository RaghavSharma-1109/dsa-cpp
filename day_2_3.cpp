#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    set<int> s;
    vector<int> li(5);
    for(int i=0;i<li.size();i++){
        cin>>li[i];
    }
    for(int x:li){
        if(s.count(x) !=0){
            cout<<"First repeating element is: "<<x<<endl;
            break;
        }
        s.insert(x);
    }

    return 0;
}