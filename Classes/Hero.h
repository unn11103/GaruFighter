#ifndef HERO_H
#define HERO_H
#include "cocos2d.h"
#include "folkaAnim.hpp"
#include "malAnim.hpp"
#include "ElbisAnim.hpp"
#include "AliceAnim.hpp"
#include "CatAnim.hpp"

using namespace TexturePacker;
USING_NS_CC;

class Hero
{
public:
	virtual int getHealth() { return health; } 
	virtual int getDmg() { return atkDmg; }	
	
	void setAtkDmg(int dmg);

	virtual Animate* getIdleAnim() { return NULL; } //return the idle animation
	virtual Animate* getAttackAnim() { return NULL; } //return the attack animation
	virtual Animate* getDeadAnim() { return NULL; } //return dead animation
	virtual Animate* getMagicAnim() { return NULL; } //return magic animation
	virtual Sprite* getSprite() { return NULL; } //return sprite
	virtual Sprite* getIcon() { return NULL; } // return icon picture
	virtual Sprite* getDead() { return NULL; }// return dead sprite
	virtual int getMaxHp() { return NULL; }
	
	virtual void setHealth(int num);
	virtual void takeAtk(int dmg) { health -= dmg; } //set the hero health
	bool isActive = true;
protected:
	int maxHp;
	int health;
	int atkDmg;

};


class Folka : public Hero 
{

public :
	Animate* getIdleAnim();
	Animate* getAttackAnim();
	Animate* getMagicAnim();
	Sprite* getSprite();
	Sprite* getIcon();
	Sprite* getDead();
	int getMaxHp() { return maxHp; }

	
	int getDmg() { return atkDmg; }
	int getHealth() { return health; }
	void setHealth(int num) {
		health = num;
	}
	void takeAtk(int dmg) { 
		health -= dmg;
		if (health == 0)
			CCLOG("FOLKA HIT!");
		 }
	bool isActive = true;
private:
	int maxHp = 2000;
	int health = maxHp;
	int atkDmg = 50;
	

};

class Malphaise : public Hero {
public : 
	Animate* getIdleAnim();
	Animate* getAttackAnim();
	Animate* getMagicAnim();
	Sprite* getSprite();
	Sprite* getIcon();
	Sprite* getDead();
	int getMaxHp() { return maxHp; }

	void setHealth(int num) {
		health = num;
	}
	int getDmg() { return atkDmg; }
	int getHealth() { return health; }
	void takeAtk(int dmg) { 
		health -= dmg;
		if (health == 0)
			CCLOG("MAL HIT!");
		
	
	}
	bool isActive = true;
private: 
	int maxHp = 2500;
	int health = maxHp;
	int atkDmg = 50;
	
};

class Alice : public Hero {
public:
	Animate* getIdleAnim();
	Animate* getAttackAnim();
	Animate* getMagicAnim();
	Animate* getDeadAnim();
	Sprite* getSprite();
	Sprite* getIcon();
	Sprite* getDead();
	int getMaxHp() { return maxHp; }
	void setHealth(int num) {
		health = num;
	}
	int getDmg() { return atkDmg; }
	int getHealth() { return health; }
	void takeAtk(int dmg) {
		health -= dmg;
		if (health == 0)
			CCLOG("ALICE HIT!");


	}
	bool isActive = true;

private:
	int maxHp = 2500;
	int health = maxHp;
	int atkDmg = 50;
	

};

class Cat : public Hero {
public:
	Animate* getIdleAnim();
	Animate* getAttackAnim();
	Sprite* getSprite();
	Sprite* getIcon();
	int getMaxHp() { return maxHp; }
	void addHealth(int num) {
		health += num;
	}
	int getDmg() { return atkDmg; }
	int getHealth() { return health; }
	void takeAtk(int dmg) {
		health -= dmg;
		if (health == 0)
			CCLOG("ELBIS HIT!");


	}

private:
	int health = 9999999;
	int atkDmg = 3000;


};




#endif 
#pragma once



