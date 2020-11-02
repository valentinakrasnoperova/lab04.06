#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double S1, S2;
    int n = 0, k;
    S1 = 0;
    k = 1;
    while (n <= 10)
    {
        S2 = 0;
        n = 1;
        while (n <= k)
        {
            S2 += sin(k * n);
            n++;
        }
        S1 += S2 / k;
        k++;
    }
    cout << S1 << endl;

    S1 = 0;
    k = 1;
    do {
        S2 = 0;
        n = 1;
        do {
            S2 += sin(k * n);
            n++;
        } while (n <= k);
        S1 += S2 / k;
        k++;
    } while (n <= 10);
    cout << S1 << endl;

    S1 = 0;
    for (k = 1; k <= 10; k++)
    {
        S2 = 0;
        for (n = 1; n <= k; n++)
        {
            S2 += sin(k * n);
        }
        S1 += S2 / k;
    }

    cout << S1 << endl;
    S1 = 0;
    for (k = 10; k >= 1; k--)
    {
        S2 = 0;
        for (n = k; n >= 1; n--)
        {
            S2 += sin(k * n);
        }
        S1 += S2 / k;
    }
    cout << S1 << endl;
    return 0;
}
