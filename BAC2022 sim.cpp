S II.3
#include <iostream>

using namespace std;

int main()
{
    int temperatura;
    cin >> temperatura;
    if (temperatura > 11)
        cout << "CALDUROS";
        else
        if(temperatura < 10)
        cout << "RACOROS";
    else
        cout << "NORMAL"; // temperatura >= 10 && temperatura <= 11

    return 0;
}
