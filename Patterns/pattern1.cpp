#include <bits/stdc++.h>
using namespace std;

int i,j;
void pattern1(int n)
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin>> n;
    pattern1(n);
}