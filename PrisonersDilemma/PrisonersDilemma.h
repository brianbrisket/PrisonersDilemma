//#pragma once

#ifndef _PRISONERSDILEMMA_H
#define _PRISONERSDILEMMA_H

//#else

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

#endif // !_PRISONERSDILEMMA_H