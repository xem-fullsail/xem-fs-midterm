// Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kevin Moniz

#include <iostream>
#include <string>
#include "QAPair.h"

int main() {
    // Create the array of questions
    QAPair questions[4];
    questions[0] = QAPair("What color is the sky?", "Blue");
    questions[1] = QAPair("What color is grass?", "Green");
    questions[2] = QAPair("What is mom spelled backwards?", "mom");
    questions[3] = QAPair("Marvel or DC", "I am Batman.");
    
    // Choose and ask a random question
    srand((unsigned int)time(NULL));
    int index = rand() % 4;
    std::cout << questions[index].question << std::endl;
    
    // Get the user's response
    std::string response;
    std::getline(std::cin, response);

    // Verify the response
    if (questions[index].IsCorrectAnswer(response, false))
        std::cout << "\nYou are correct!";
    else
        std::cout << "\nSorry, the correct answer is: " << questions[index].answer;
}
