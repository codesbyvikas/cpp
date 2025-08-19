#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>::iterator it = v.begin();
    it++;
    cout <<*(it)<<" ";
    cout <<v.back()<<endl;

    for(auto i = v.begin();i!=v.end();i++){
        cout <<*(i)<<" ";
    }

    cout<<endl;
    cout<<"size is: "<<v.size();

    it=it+2;
    // cout << *(it);
    // cout << v[1];
    vector<int>v2(5,100);
    // cout << v2[3];
    vector<pair<int,int>>v3;

    v3.emplace_back(1,2);
    v3.emplace_back(3,4);
    v3.emplace_back(5,6);
    v3.emplace_back(7,8);

    // cout << v3[2].second;






}