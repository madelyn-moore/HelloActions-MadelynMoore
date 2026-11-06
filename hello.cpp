// this is main program that i made
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const char* name = getenv("WHO_TO_GREET");

    if (name == nullptr) {
        name = "GitHub Actions Student";
    }

    cout << "Hello " << name << "!" << endl;
    cout << "This program is running inside GitHub Actions." << endl;

    return 0;
}
