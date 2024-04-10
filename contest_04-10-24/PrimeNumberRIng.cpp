#include <bits/stdc++.h>
using namespace std;

void eh_possible(vector<int> s, int n,int total){
    if(n == total){
        for(auto a: s)
            cout << a << " ";
        s.clear();
        s.push_back(1);
        cout << endl;
    }else{
        for(int i = 2; i <= total; i++){
            if((s[s.size()-1]+i%2!=0 && (s[s.size()-1])+i%2+1!=0) ){
                s.push_back(i);
                eh_possible(s,n+1,total);
            }
        }
    }
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> m;
    m.push_back(1);
    eh_possible(m,0,n);

}