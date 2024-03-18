#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N =0, numb;
    std:: cin >> N;
    std::vector<int> vec;

    for(int i = 0; i < N; i++){
        cin >> numb;
        vec.push_back(numb);
    }
    for(int j = 0; j < N; j++){
        if(vec.at(j)%2==0){
            if (j+1 == N) {
                cout << vec.at(j) ;
            }else{
                cout << vec.at(j) << " ";
            }
        }
    }



}