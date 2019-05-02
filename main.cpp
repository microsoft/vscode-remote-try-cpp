#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "Input: ";
    string data;
    getline(cin, data);
    cout << "Output: " << data << "\n\n";
    return 0;
}