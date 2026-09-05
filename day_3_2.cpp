#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;
    vector<int> v(5);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    for(int x:v){
        pq.push(x);
    }

    for(int i=0;i<v.size();i++){
        cout<<"Largest no.: "<<pq.top()<<endl;
        pq.pop();
    }

    return 0;
}
