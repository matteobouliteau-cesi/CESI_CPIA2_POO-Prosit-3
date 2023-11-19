#include "CLpoint3D.h"
#include "CLpoint.h"
#include <iostream>

CLpoint3D::CLpoint3D() {
	this->dim3 = 0;
	CLpoint();
}

CLpoint3D::CLpoint3D(float dim1, float dim2, float dim3) : CLpoint(dim1, dim2) {
	this->dim3 = dim3;
}

float CLpoint3D::getDim3() {
	return this->dim3;
}

void CLpoint3D::setDim3(float dim3) {
	this->dim3 = dim3;
}

void CLpoint3D::moveDim3(float dim3) {
	this->dim3 += dim3;
}

void CLpoint3D::afficherCoordo() {
	std::cout
		<< "Les coordonnées du point : "
		<< this
		<< ", d'ID : "
		<< " et de type : 1, sont ("
		<< getDim1()
		<< ":"
		<< getDim2()
		<< ")("
		<< getDim3()
		<< ")";
}
