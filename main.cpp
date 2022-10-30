#include <iostream>
#include <cstdlib>
#include <sstream>
#include "generation.h"

using namespace std;

int main() {
    int first_number = rand() % 10;
    int second_number = rand() % 10;

    // create a stream (like the cin, cout)
    stringstream question;
    question << "What's the product of " << first_number << " and " << second_number << "?" << endl;

    // type string stream has a str() method to convert the stream into a string object
    cout << question.str();

    int answer;

    cin >> answer;

    if(first_number * second_number == answer) {
        cout << response(true) << endl;
    } else {
        cout << response(false) << endl;
    }

    //todo: Make it run  loop.
    //todo: Add an intro with a quit option.

    return 0;
}
