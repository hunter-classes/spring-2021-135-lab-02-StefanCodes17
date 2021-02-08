#include <iostream>
using namespace std;

/* 
Once the fibonaccio sequence reaches about 2 billion the numbers become negative because there is an integer overflow meaning the number has gotten to large to store, the maximum the int data type can store is about 4 bytes or 2^ (8n-1) where n is the number of bytes meaning 2^31 .. even though 4 bytes means 2^32 since the int is signed integer meaning it can store positive and negative values it has to use once bit slot to denote positive and negative values
*/

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    cout << fib[0] << endl;
    cout << fib[1] << endl;
    for (int i = 2; i < 60; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }
    return 0;
}
