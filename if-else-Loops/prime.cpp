#include <bits/stdc++.h>
using namespace std;

int main() {

int n,i;
cin >> n;

 i=2;

while(i<n){
    if(n % i==0){
        cout<<"not prime"<<endl;

    }
    else{
        cout<<"prime"<<endl;
    }
    i++;

}

}