#pragma once
#include <string>

using namespace std;
class Students
{
public:
	Students();
	~Students();
	void set_name(string);


	string get_name();

	void set_last_name(string);

		string get_last_name();

	void set_scores(int scores[]);
	void set_average_score(float);
	float get_average_score();

private:
	int scores[5];
	float average_score;
	string name;
	string last_name;
};