#include <iostream>
#include <cstdlib>  
#include <ctime>     

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "I have chosen a number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n";

    do {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Please enter a valid number.\n";
            continue;
        }
        
        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low!\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "Wonderfull Dear! Correct You guessed it in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}