SI.
1. a.
2. b.
3. c.
4. c.
5. d.

SII.
1.
a) 9752
b) 321 432
c)
#include <iostream>
using namespace std;
int main()
{
    int x, p, m, c;
    cin >> x;
    p = 1; m = -1;
    while (p <= x)
    {
        c = (x/p)%10;
        if (c > m)
        {
            m = c; p = p * 10;
        }
        else
            x = (x/(p*10))*p+x%10;
    }
    if (m >= 0)
        cout << x;
    else
        cout << "nul";
    return 0;
}
d)
citeşte x (număr natural)
 p<-1; m<- -1
┌repetă
│ c<-[x/p]%10
│┌dacă c>m atunci
││ m<-c; p<-p*10
││altfel
││ x<-[x/(p*10)]*p+x%p
│└■
└până când p>x
┌dacă m≥0 atunci scrie x
│ altfel scrie "nul"
└■

2. 34, 36, 38

3.
char cod1, cod2;
int suma = 1000, pret1, pret2;
cin >> cod1 >> pret1 >> cod2 >> pret2;
cout << cod1 << " " << suma/pret1 << endl;
cout << cod2 << " " << suma/pret2 << endl;

SIII.
1.
 citeşte n; ok<-0;
 s<-0;
┌pentru d<-1, n execută
│┌dacă n%d=0 atunci
││  s<-s+d;
│└■
└■
 nap<-[s/n];
┌pentru x<-1, n-1 execută
│ s<-0;
│ ┌pentru d<-1, x execută
│ │┌dacă x%d=0 atunci
│ ││ s<-s+d;	
│ │└■
│ └■
│  rapx<-[s/d];
│┌dacă rapx > rap atunci
││ ok<-1;
│└■
└■
┌dacă ok=1 atunci
│  scrie 0
└altfel
   scrie 1


2.
#include <iostream>
using namespace std;
int main()
{
    int np, maxx = 0, poz, x;
    cin >> np;
    for (int i = 1; i <= np; i++)
    {
        cin >> x;
        if (x > maxx)
        {
            maxx = x;
            poz = i;
        }
    }
    cout << "1:" << poz << " ";
    maxx = 0;
    for (int i = 1; i <= np; i++)
    {
        cin >> x;
        if (x > maxx)
        {
            maxx = x;
            poz = i;
        }
    }
    cout << "2:" << poz << " ";
}

3.
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("bac.txt");
int main()
{
    int x, pre[100]={}, suf[100]={}, k = 0;
    while (fin >> x)
    {
        pre[x/10]++;
        suf[x%100]++;
    }
    for (int i = 10; i <= 99; i++)
    {
        if (pre[i] == suf[i] && suf[i] != 0)
            k++;
    }
    cout << k;
}

