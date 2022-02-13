#include <iostream>
#include <cstdio>

#define maxV 10000

using namespace std;

int aux[maxV];
int node, adj[100][100];
int componentes;

void way(int v)
{
    aux[v] = 1;
    for (int w = 0; w < node; ++w)
        if (adj[v][w] == 1 && aux[w] == -1)
            way(w);
}

void verify()
{
    for (int v = 0; v < node; ++v)
        aux[v] = -1;

    for (int v = 0; v < node; ++v)
    {
        if (aux[v] == -1)
        {
            componentes++;
            way(v);
            cout << "\n";
            for (int i = 0; i < node; i++)
            {
                if (aux[i] > 0)
                {
                    cout << char('a' + i) << ",";
                    aux[i] = 0;
                }
            }
        }
    }
}

int main()
{
    char v, w;
    int casos, edge;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> node >> edge;
        for (int j = 0; j < node; j++)
        {
            for (int k = 0; k < node; k++)
            {
                adj[j][k] = 0;
            }
        }
        for (int j = 0; j < edge; j++)
        {
            cin >> v >> w;
            adj[v - 97][w - 97] = 1;
            adj[w - 97][v - 97] = 1;
        }
        componentes = 0;
        cout << "Case #" << (i + 1) << ":";
        verify();
        cout << endl
             << componentes << " connected components\n\n";
    }
    return 0;
}