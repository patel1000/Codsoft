#include <iostream>
#include <cstdlib>

int main() {
    int number;
    int min = 1;
    int max = 100;
    bool success = false;
    int unknown = std::rand() % (max - min + 1) + min;

    std::cout << "Number is between 1 to 100" << std::endl;
    
    do {
        std::cout << "Guess the number: ";
        std::cin >> number;

        if (unknown == number) {
            std::cout << "Correct!" << std::endl;
            success = true;
            break;
        } else if (number > unknown) {
            std::cout << "You guessed higher. The secret number is lower than your guess." << std::endl;
        } else if (number < unknown) {
            std::cout << "You guessed lower. The secret number is higher than your guess." << std::endl;
        }
    } while (!success);

    std::cout << "Congratulations, you guessed the right number!" << std::endl;  

    return 0;
}
