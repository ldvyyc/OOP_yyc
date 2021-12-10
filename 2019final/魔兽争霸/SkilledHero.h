#pragma once
#include "Hero.h"

class SkilledHero : public Hero
{
	// TODO
public:
	static int Alv;
	static int Blv;
	void getSkill(name2Level &skillMap) override
	{
		skillMap["Avatar"] = Alv;
		skillMap["Bladestorm"] = Blv;
		Alv = 0;
		Blv = 0;
		return;
	}
};

int SkilledHero::Alv = 0;
int SkilledHero::Blv = 0;