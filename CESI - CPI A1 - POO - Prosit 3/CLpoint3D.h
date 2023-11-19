#include "CLpoint.h"

#pragma once
class CLpoint3D : public CLpoint
{
private:
	float dim3;
public:
	CLpoint3D();
	CLpoint3D(float dim1, float dim2, float dim3);
	float getDim3() override;
	void setDim3(float dim3);
	void moveDim3(float dim3);
	void afficherCoordo() override;
};

