#pragma once
#include <string>


class QAPair {

public:
	QAPair() {
		question = "";
		answer = "";
	}

	QAPair(std::string q, std::string a) {
		question = q;
		answer = a;
	}

	std::string question;
	std::string answer;

};

