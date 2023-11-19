#include "CLparcours.h"

#pragma once
class CLparcours2D : public CLparcours
{
public:
	CLparcours2D(int taille) : CLparcours(taille) {};
	float calculDistance() override;
	void message() override;
};

