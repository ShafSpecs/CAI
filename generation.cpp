#include <string>
#include <cstdlib>
#include "generation.h"

using namespace std;

std::string response(bool correct) {
    int random_response = rand() % 4;

    if(correct){
        switch (random_response) {
            case 0:
                return "Awesome! You got it";
                break;
            case 1:
                return "Nice! You are doing well!";
                break;
            case 2:
                return "Fantastica! You are a genius!";
                break;
            case 3:
                return "Very good. Let's go!";
                break;
            default:
                return "Sweet!";
        }
    } else {
        switch (random_response) {
            case 0:
                return "Uh oh!";
                break;
            case 1:
                return "Try again.";
                break;
            case 2:
                return "Too bad.";
                break;
            case 3:
                return "Tsk!";
                break;
            default:
                return "";
        }
    }
}