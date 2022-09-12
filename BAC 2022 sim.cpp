III.1
  #include <iostream>
using namespace std;

int main() {
  int x, y , n,i,flag=0;
  cin >> x >> y >> n ;
  for (i = n; i >= 1; i--)
    {
      if (i % x == 2 && i % y == 2){
        cout<<i;
        flag++;
        break;
        }
        
    }
  if(flag==0){
    cout<<0;
  }
}

III.2
  #include <iostream>
using namespace std;

int main() {
  int flag = 0, n, a[300], x;
  cin >> n;
  for (int i = 0; i <= n * 3 - 1; i++) {
    cin >> a[i];
  }
  cin >> x;
  for (int i = 0; i <= 3 * n - 1; i = i + 3) {
    if (a[i] == x) {
      cout << a[i + 1] << " ";
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << "NU";
  }
}

III.3
  #include <iostream>
using namespace std;

int main() {
  int n, p, i, y, k, suma = 0;
  cin >> n;
  for (i = 3; i <= n; i = i + 3) {
    y = i;
    k = 0; /// k=exponentul lui 3 in desc in factori primi a lui y
    while (y % 3 == 0) {
      k++;
      y = y / 3;
    }
    suma = suma + k;
  }
  if (suma % 2 == 1) {
    suma = suma - 1;
  }
  p = suma / 2;
  cout << p;
}
