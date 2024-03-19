#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> integ;
    int numb;
    for(int i = 0; i < 5; i++){
        cin >> numb;
        integ.insert(numb);
    }   
    cout << integ.size();
}