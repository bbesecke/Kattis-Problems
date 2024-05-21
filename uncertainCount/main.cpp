#include <iostream>
#include <string>

using namespace std;

string letter();

int main()
{
    string char1 = letter();
    size_t length = char1.length();
    cout << length << endl;
    
    return 0;
}
string letter()
{
    string u;
    cin >> u;
    return u;
}
