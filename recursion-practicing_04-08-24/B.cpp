#include <iostream>
#include <string>
using namespace std;

int soma(string n, int resul, int i){
    if(n.size() == i){
        return resul;
    }else{
        return soma(n,resul+int(n[i]-'0'), i+1); //1 2 2
    } 
    }

int numero_soma(int n){
    if(std::to_string(n).size() == 1){
        return n;
    }else{
        int resultado = soma(std::to_string(abs(n)), 0, 0);
        return numero_soma(resultado);
    }
}

int main(){
    int num;
    while(cin >> num){
        if(num == 0){
            break;
        }
        cout << numero_soma(num) << endl;
    }
    return 0;
}