#pragma once
class Weapon
{
private:
	int maximumDamage;
	int minimumDamage;
	int iD;
	const char* name;
	const char* namePlural;
public:
	Weapon(int iD = 0, const char* name = "none", const char* namePlural = "none", int minimumDamage = 0, int maximumDamage = 0);;
};