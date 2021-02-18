#ifndef BOSS_H
#define BOSS_H
#include "cocos2d.h"
#include "Hero.h"
#include "garuAnim.hpp"
#include "FiendAnim.hpp"
#include "DragonAnim.hpp"

USING_NS_CC;


//abstract class
class Boss
{
public:
	virtual int getHealth() { return health; }
	virtual int getDmg() { return atkDmg; }
	virtual int getMaxHp(){ return maxHp; }
	virtual void setHealth(int dmg) {  //set the health of the bosses

		health -= dmg;
		//log if damaged
		if (health >0){
			
			CCLOG("Ouch!");}
		else {
			CCLOG("Dead!");
			
		}
	}
	
	virtual Sprite* getSprite() { return NULL; } //return the sprite
	virtual Sprite* getIcon() { return NULL; } //return the icon picture
	virtual Animate* getIdleAnim() { return NULL; } // return the idle animation
	virtual Animate* getAtkAnim() { return NULL; } // return the attack animation
	


private:
	int maxHp;
	int health;
	int atkDmg;
};

class Garuda : public Boss  //first boss 
{
public:
	Sprite* getSprite();
	Sprite* getIcon();
	Animate* getIdleAnim();
	Animate* getAtkAnim();
	int getHealth() { return health; }
	int getDmg() { return atkDmg; }
	int getMaxHp() { return maxHp; }
	void setHealth(int dmg) {

		health -= dmg;
		if (health > 0) {

			CCLOG("Ouch!");
		}
		else {
			CCLOG("Dead!");

		}
	}

	

private:
	int maxHp = 7500;
	int health = maxHp;
	int atkDmg = 500;

};

class Fiend : public Boss {

public:
	Sprite* getSprite();
	Sprite* getIcon();
	Animate* getIdleAnim();
	Animate* getAtkAnim();
	int getMaxHp() { return maxHp; }
	int getHealth() { return health; }
	int getDmg() { return atkDmg; }
	void setHealth(int dmg) {

		health -= dmg;
		if (health > 0) {

			CCLOG("Ouch!");
		}
		else {
			CCLOG("Dead!");

		}
	}

private:
	int maxHp = 10000;
	int health = maxHp;
	int atkDmg = 500;

};


class Dragon : public Boss {

public:
	Sprite* getSprite();
	Sprite* getIcon();
	Animate* getIdleAnim();
	Animate* getAtkAnim();
	int getMaxHp() { return maxHp; }
	int getHealth() { return health; }
	int getDmg() { return atkDmg; }
	void setHealth(int dmg) {

		health -= dmg;
		if (health > 0) {

			CCLOG("Ouch!");
		}
		else {
			CCLOG("Dead!");

		}
	}

private:
	int maxHp = 30000;
	int health = maxHp;
	int atkDmg = 9999;

};


#endif // !BOSS_H

#pragma once
