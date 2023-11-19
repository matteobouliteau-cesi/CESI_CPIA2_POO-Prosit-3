#include "CLparcours.h"

#pragma once
class CLparcours3D : public CLparcours
{
public:
	CLparcours3D(int taille) : CLparcours(taille) {};
	float calculDistance() override;
	void message() override;
};

