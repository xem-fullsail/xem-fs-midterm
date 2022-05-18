#include "QAPair.h"

// Default Constructor
QAPair::QAPair() {
	question = "";
	answer = "";
}

// Constructor
QAPair::QAPair(std::string q, std::string a) {
	question = q;
	answer = a;
}

// Returns true if the given string is the correct answer to this question.
bool QAPair::IsCorrectAnswer(std::string a, bool caseSensetive) {
	if (!caseSensetive) {
		if (ToLower(a) == ToLower(answer)) return true;
		else return false;
	}
	else if (answer == a) return true;
	else return false;
}

// Returns the given string in lower case.
std::string QAPair::ToLower(std::string original) {
	for (auto i = 0; i < original.length(); i++)
		original[i] = std::tolower(original[i]);
	return original;
}