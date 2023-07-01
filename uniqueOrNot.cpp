#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

bool cirPrime(int n)
{
    int cnt = 0, temp = n;
    while (temp != 0)
    {
        cnt++;
        temp = temp / 10;
    }
    temp = n;
    while (isPrime(temp))
    {
        int rem = temp % 10;
        int div = temp / 10;
        temp = (pow(10, cnt - 1)) * rem + div;
        if (temp == n)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cirPrime ? cout << "True" : cout << "False";
    cout << endl;
    return 0;
}