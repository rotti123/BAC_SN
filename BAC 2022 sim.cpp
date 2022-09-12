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
