SIII ex 2

#include <iostream>

using namespace std;

int main()
{
    int n, x, a[301], ok = 0;
    cin >> n;
    for (int i = 1; i <= 3 *n; i++)
        cin >> a[i];
    cin >> x;
    // i = pozitia prenumelui
    for (int i = 1; i <= 3 * n; i = i + 3)
    {
        // verific daca prenumele este x
        if (a[i] == x)
        {
            // afisez numele asociat
            cout << a[i+1] << " ";
            ok = 1; // marchez ca am gasit un prenume x
        }
    }
        if (ok == 0) // nu am gasit un prenume x
            cout << "nu exista";
    return 0;
}


SIII ex 3

  #include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, k, d, i, sol = 0, x;
    ifstream cin ("bac.txt");
    cin >> n;
    for (d = 3; d <= n; d = d+3)
    // parcurgem intervalul [1, n] si extragem toti multiplii lui 3
    {
        x = d;
        k = 0;
        // x = 3^k * p
        // gasim puterea lui 3 din descompunerea in factori a lui x
        while (x % 3 == 0)
        {
            x = x/3;
            k++;

        }
        // n! = 3^sol * P
        // sol = puterea lui 3 din descompunerea in factori a lui n!
        sol = sol + k;

    }
    // 9^k = 3^(2k)
    // sol= 2k -> k = sol / 2
    cout << sol/2;
    return 0;
}
  
