#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int N,M,n,nb;
    cin >> N >> M;
    vector<vector<int>> matrix;

    //ler
    for(int i  =0; i < N; i++){
        for (int j = 0; j < M; j++){
            if(j == 0){
                cin >> n;
                matrix.at(i).at(j) = n;
                M = n;
                continue;
            }
            cin >> nb;
            matrix.at(i).at(j) = nb;
        }
    }
    //resolver
    int cont = 0;
    int resul = 0;
    vector<set<int>> pessoas(N);
    for(int i =0; i < N; i++){
        cont = 0;
        for(int j = 0; j < M; j++){
            if(pessoas.at(i).find(j) != pessoas.at(i).end()){
                cont++;
            }
        }
        if(cont == N){
            resul ++;
        }
    }

    cout << resul;

}