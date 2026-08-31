#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){   
        cin>>v[i];
    }
    cout<<"sum of elements: "<<endl;
    int sum =0;
    for(vector<int>::iterator it=v.begin();it != v.end();it++){
        sum += *it;
    }
    cout<<"Sum: "<<sum<<endl;

    int max_element = INT_MIN;
    for(vector<int>::iterator it=v.begin();it != v.end();it++){
        if(*it>max_element){
            max_element = *it;
        }
    }
    cout<<"Max element: "<<max_element<<endl;
    
}