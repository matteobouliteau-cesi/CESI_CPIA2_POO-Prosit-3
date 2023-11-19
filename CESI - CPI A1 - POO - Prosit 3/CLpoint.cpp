#include "CLpoint.h"
#include <iostream>

CLpoint::CLpoint() {
	this->dim1 = 0;
	this->dim2 = 0;
}

CLpoint::CLpoint(float dim1, float dim2) {
	this->dim1 = dim1;
	this->dim2 = dim2;
}

float CLpoint::getDim1() {
	return this->dim1;
}

float CLpoint::getDim2() {
	return this->dim2;
}

void CLpoint::setDim1(float dim1) {
	this->dim1 = dim1;
}

void CLpoint::setDim2(float dim2) {
	this->dim2 = dim2;
}

void CLpoint::moveDim1(float dim1) {
	this->dim1 += dim1;
}

void CLpoint::moveDim2(float dim2) {
	this->dim2 += dim2;
}

float CLpoint::getDim3() {
	return 0;
}

void CLpoint::afficherCoordo() {
	std::cout
		<< "Les coordonnées du point : "
		<< this
		<< ", d'ID : "
		<< " et de type : 1, sont ("
		<< getDim1()
		<< ":"
		<< getDim2()
		<< ")";
}

