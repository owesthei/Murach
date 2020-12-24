#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Guest Book\n\n";

    string first_name;
    cout << "First name:\t";
    cin >> first_name;
    cin.ignore(100, '\n');

    char middle_initial;
    cout << "Middle initial:\t";
    middle_initial = cin.get();
    cin.ignore(100, '\n');

    string last_name;
    cout << "Last name:\t";
    getline(cin, last_name);

    string city;
    cout << "City:\t\t";
    getline(cin, city);

    string country;
    cout << "Country:\t";
    getline(cin, country);

    cout << "\nENTRY\n"
         << first_name + ' ' + middle_initial + ". " + last_name + '\n'
         << city + ", " << country + "\n\n";
}