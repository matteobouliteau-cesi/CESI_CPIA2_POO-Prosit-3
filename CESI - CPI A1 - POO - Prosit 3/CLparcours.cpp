#include "CLparcours.h"

CLparcours::CLparcours(int taille) {
	this->taille = taille;
	points.resize(taille, 0);
}

int CLparcours::getTaille() {
	return this->taille;
}

std::vector<CLpoint*> CLparcours::getPoints() {
	return this->points;
}

void CLparcours::setTaille(int taille) {
	this->taille = taille;
}

void CLparcours::setPoints(std::vector<CLpoint*> points) {
	this->points = points;
}

void CLparcours::ajouterPoint(CLpoint* point) {
	int i = 0;
	while (i < this->taille - 1 && this->points[i] != 0) {
		i += 1;
	}

	if (this->points[i] == 0) {
		this->points[i] = point;
	}
	else {
		std::cout << "[ERREUR] Le parcours est plein, vous ne pouvez pas ajouter de points.";
	}
}
