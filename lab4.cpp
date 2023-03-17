#include <iostream>
#include <string>
#include "students.h"
using namespace std;

int main()
{
	Students* student = new Students;
	string name;
	string last_name;
	cout << "name:  ";
	getline(cin, name);
	cout << "last name:  ";
	getline(cin, last_name);
	student->set_name(name);
	student->set_last_name(last_name);
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		cout << "score" << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student->set_scores(scores);
	float average_score = sum / 5.0;
	student->set_average_score(average_score);
	cout << "average ball for" << student->get_name() << " " << student->get_last_name()<< " is " << student->set_average_score() << endl;
	delete student;
	cin.get();
	cin.get();
	return 0;
}
