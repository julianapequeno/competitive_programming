#include <iostream>
using namespace std;

int cycle_length(int n, int c){
    c++;
    if(n == 1)
        return  c;
    if(n%2!=0)
        return cycle_length(3*n+1,c);
    else
        return cycle_length(n/2,c);
    
}

int main(){
    int maior= 0 ;
    int n,m,aux;
    bool inv = false;
    while(cin >> n >> m){
        maior = 0;
        if(n > m){
            aux = n;
            n = m;
            m = aux;
            inv = true;
        }
        for(int i = n; i <= m; i++){
            cycle_length(i,0);
            if(cycle_length(i,0) > maior){
                maior = cycle_length(i,0);
            }
        }
        if(inv){
            cout << m << " " << n << " " << maior << endl;
            inv = false;
        }else{
            cout << n << " " << m << " " << maior << endl;
        }
    }
    return 0;
}