// Midterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kevin Moniz

#include "Midterm.h"
#include "QAPair.h"

int main() {
    // Create the array of questions
    QAPair questions[4];
    questions[0] = QAPair("What color is the sky?", "Blue");
    questions[1] = QAPair("What color is grass?", "Green");
    questions[2] = QAPair("What is mom spelled backwards?", "mom");
    questions[3] = QAPair("Marvel or DC", "I am Batman.");

    // Choose a random question
    int random = rand();
}
