#pragma once
class Estus
{private:
	int iD;
	const char* name;
	const char* namePlural;
	int amountToHeal;
public:
	Estus(int iD = 0, const char* name = "none", const char* namePlural = "none", int amountToHeal);
};

