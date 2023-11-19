#include "CLparcours3D.h"
#include "CLpoint3D.h"

float CLparcours3D::calculDistance() {
	float dist = 0;

	for (int i = 1; i < getTaille(); ++i) {
		if (getPoints()[i] != 0) {
			dist += sqrt(pow(getPoints()[i]->getDim1() - getPoints()[i - 1]->getDim1(), 2) + pow(getPoints()[i]->getDim2() - getPoints()[i - 1]->getDim2(), 2) + pow(getPoints()[i]->getDim3() - getPoints()[i - 1]->getDim3(), 2));
		}
	}

	return dist;
}

void CLparcours3D::message() {
	std::cout << "Calcul d'un parcours de type 3D" << std::endl;
}
