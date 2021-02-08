#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter an integer: " << endl;
    cin >> n;
    while (!(n > 0 && n < 100))
    {
        cout << "Please re-enter: ";
        cin >> n;
    }
    cout << "Number squared is " << n * n << endl;
    return 0;
}