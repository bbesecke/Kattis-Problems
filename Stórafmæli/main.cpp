#include <iostream>

using namespace std;

int ann(int);

int main(int argc, char *argv[])
{
    int num1;
    cin >> num1;
    ann(num1);
}

int ann(int num2)
{
    if (num2 % 10 == 0)
    {
        cout << "Jebb" << endl;
    }
    else
        cout << "Neibb" << endl;
    return 0;
}