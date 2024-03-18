#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string S;
    std::cin >> S;

    for(int i = 1; i <= 16; i++){
        if((i%2==0) && S[i-1]=='1'){
            std::cout << "No";
            return 0;
        }
    }

    std::cout << "Yes";
    return 0;
}