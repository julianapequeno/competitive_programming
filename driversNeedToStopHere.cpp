#include <bits/stdc++.h>
#define MAXN 100100

using namespace std;

struct gas
{
    double preco, estoq;
};

gas forn[MAXN];

int n;
double d, custo;

bool compare(gas x, gas y)
{
    return x.preco < y.preco;
}

int main()
{
    cin >> n >> d; //! Consigo ler mais de uma variável por ve

    for (int i = 1; i <= n; i++)
    {
        cin >> forn[i].preco >> forn[i].estoq; //! Consigo ler variável diretamente
    }

    sort(forn + 1, forn + n + 1, compare); //! ordena de acordo com o preço

    for (int i = 1; i <= n; i++)
    {
        gas davez = forn[i];

        if (davez.estoq < d)
        {
            custo += davez.estoq * davez.preco;
            d -= davez.estoq;
        }
        else
        {
            custo += d * davez.preco;
            d = 0;
            break;
        }
    }

    if (d)
    { //! Se o d ainda possuir algum valor
        cout << "Impossível\n";
    }
    else
    {
        cout << fixed << setprecision(2) << custo << "\n"; // seta a precisão em duas casas decimais
    }

    return 0;
}