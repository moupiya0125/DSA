#include <bits/stdc++.h>
using namespace std;

void explainPairs (){
    pair<int,int>p = {1,3};
    cout<< p.first<<" "<<p.second<<endl;


    pair <int,pair<int,int>>p1 = {2,{4,5}};
    cout<<p1.first <<" "<< p1.second.first <<" "<< p1.second.second<<endl;


    pair <int,int> arr[]= {{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[2].second;

}

int main (){
    explainPairs();
}