#include <bits/stdc++.h>
using namespace std; 

int sum(int n){
    if(n<1){
        return n;
    }
    return n + sum(n-1);
}

int main(){
    cout<<sum(5)<<endl;

}