#include <iostream>
using namespace std;

void congratulate(string name)
{
    cout << "Congratulations " << name;
}

int main()
{
    string user;

    cout << "Enter your name: ";
    cin >> user;

    congratulate(user);

    return 0;
}
