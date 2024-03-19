#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    string str = "";

    std::cin>> N;

    cin >> str;

    vector<char> str_lst;
    for(auto el: str){
        str_lst.push_back(el);
    }

    string str_fin;

    for(int i = 0; i < N; i++){
        if(i+1== N){
            str_fin += str_lst[i];
            break;
        }else if(str_lst.at(i) == 'n' && str_lst.at(i+1)=='a'){
            str_fin += "nya";
            i++;
        }else{
            str_fin += str_lst[i];
        }
    }
    cout << str_fin;

}