#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main(){
    queue<string> que;
    vector<string> li(5);

    for(int i=0;i<5;i++){
        cin>>li[i];
    }

    for(string s:li){
        cout<<"Person: "<<s<<endl;
        que.push(s);
        cout<<"Added to Queue"<<endl;
    }

    for(int i=0;i<5;i++){
        cout<<i+1<<" Person served: ";
        cout<<que.front()<<endl;;
        que.pop();
    }

    return 0;
}