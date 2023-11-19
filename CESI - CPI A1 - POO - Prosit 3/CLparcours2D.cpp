#include "CLparcours2D.h"

float CLparcours2D::calculDistance() {
	float dist = 0;
	for (int i = 1; i < getTaille(); ++i) {
		if (getPoints()[i] != 0) {
			dist += sqrt( pow(getPoints()[i]->getDim1() - getPoints()[i - 1]->getDim1(), 2) + pow(getPoints()[i]->getDim2() - getPoints()[i - 1]->getDim2(), 2));
		}
	}

	return dist;
}

void CLparcours2D::message() {
	std::cout << "Calcul d'un parcours de type 2D" << std::endl;
}
