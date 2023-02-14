#include <iostream>
#include <string>

using namespace std;

int main() {
    string notes = "";

    while (true) {
        cout << "Enter a note: ";
        string input;
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        notes += input + "\n";
        cout << "Your notes:\n" << notes << endl;
    }

    return 0;
}
