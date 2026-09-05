#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    cout<<"Enter size for array: "<<endl;
    int n;
    cin>>n;
    vector<int> v(n);

    cout<<"Enter array element:- "<<endl;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter your target element: "<<endl;
    int target;
    cin>>target;

    unordered_map<int, int> freq;
    bool is_found =false;

    for(int i=0; i<v.size();i++){
        int temp = target - v[i];
        if(freq.find(temp) != freq.end()){
            is_found=true;
            cout<<"Target found at: "<<i <<" "<<freq[temp];
            break;
        }
        freq[v[i]] = i;
    }

    if(!is_found){
        cout<<"Target Not found!"<<endl;
    }
    return 0;
}