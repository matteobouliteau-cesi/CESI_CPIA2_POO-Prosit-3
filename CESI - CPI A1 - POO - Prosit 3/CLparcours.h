#include <iostream>
#include <vector>
#include "CLPoint.h"
#include "CLpoint.h"

#pragma once
class CLparcours
{
private:
	int taille;
	std::vector<CLpoint*> points;
public:
	CLparcours(int taille);
	int getTaille();
	std::vector<CLpoint*> getPoints();
	void setTaille(int taille);
	void setPoints(std::vector<CLpoint*> points);
	void ajouterPoint(CLpoint* point);
	virtual float calculDistance() = 0;
	virtual void message() = 0;
};

