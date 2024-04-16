#include <bits/stdc++.h>
using namespace std;

// Usa backtracking podendo repetir número, para imprimir a quantidade de combinações
// possíveis que dão a somaAlvo 20.
int somaAlvo = 20;
vector<int> numeros = {1, 2, 3, 5, 10};
vector<int> solucao(5, 0);
// somar 5 números de forma uqe resulte em somaAlvo
void gerarCombRep(int n)
{
    if (n == 5)
    {
        int soma = 0;
        for (int i = 0; i < 5; i++)
        {
            soma += solucao[i];
        }

        if (soma == somaAlvo)
        {
            cout << "[";
            for (int i = 0; i < 4; i++)
            {
                cout << solucao[i] << " ,";
            }
            cout << solucao[4] << "]" << endl;
        }
    }
    else
    {
        for (int i = 0; i < numeros.size(); i++)
        {
            solucao[n] = numeros[i];
            gerarCombRep(n + 1);
        }
    }
}

// INCOMPLETO
/*
void gerarCombNoRep(int n)
{
    if (n == 5)
    {
        int soma = 0;
        for (int i = 0; i < 5; i++)
        {
            soma += solucao[i];
        }

        if (soma == somaAlvo)
        {
            cout << "[";
            for (int i = 0; i < 4; i++)
            {
                cout << solucao[i] << " ,";
            }
            cout << solucao[4] << "]" << endl;
        }
    }
    else
    {
        for (int i = 0; i < numeros.size(); i++)
        {
            solucao[n] = numeros[i];
            gerarCombRep(n + 1);
        }
    }
}
*/

vector<int> subconjunto;
vector<int> numerosSSs = {0, 1, 2};
void gerarSubConjuntos(int n)
{
    if (n == numerosSSs.size())
    {
        cout << "[ ";
        for (auto x : subconjunto)
        {
            cout << x << " ";
        }
        cout << "]" << endl;
    }
    else
    {
        // considerando que o n-ésimo NÃO ESTÁ no subconjunto
        gerarSubConjuntos(n + 1);
        // considerando que o n-ésismo está no subconjunto
        subconjunto.push_back(numerosSSs[n]);
        gerarSubConjuntos(n + 1);
        subconjunto.pop_back();
    }
}
int main()
{
    // gerarCombRep(0);
    gerarSubConjuntos(0);
}