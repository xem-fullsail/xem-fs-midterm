#pragma once
#include <string>


class QAPair {

public:

	std::string question;
	std::string answer;

	QAPair();
	QAPair(std::string q, std::string a);
	bool IsCorrectAnswer(std::string a, bool caseSensetive = true);

private:

	std::string ToLower(std::string original);

};

