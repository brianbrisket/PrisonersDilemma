#include <iostream>

using namespace std;

enum Outcome
{
	worst,
	third,
	second,
	best
};

class PrisonersDilemma
{
private:

	int points;

public:
	
	void setPointsFromGame(Outcome);
	int getPoints() const;
};

void PrisonersDilemma::setPointsFromGame(Outcome points)
{
	this->points = points;
}

int PrisonersDilemma::getPoints() const
{
	return this->points;
}

int main()
{
	PrisonersDilemma player1;
	player1.setPointsFromGame(best);
	cout << player1.getPoints() << endl;

	cin.ignore();
	cin.get();
}