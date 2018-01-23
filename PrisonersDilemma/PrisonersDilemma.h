#pragma once

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

