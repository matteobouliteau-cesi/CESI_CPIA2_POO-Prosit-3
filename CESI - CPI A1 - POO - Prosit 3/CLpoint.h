#pragma once
class CLpoint
{
private:
	float dim1;
	float dim2;
public:
	CLpoint();
	CLpoint(float dim1, float dim2);
	float getDim1();
	float getDim2();
	void setDim1(float dim1);
	void setDim2(float dim2);
	void moveDim1(float dim1);
	void moveDim2(float dim2);
	virtual float getDim3();
	virtual void afficherCoordo();
};

