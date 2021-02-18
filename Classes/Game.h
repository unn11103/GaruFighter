#ifndef GAME_H
#define GAME_H

#include "cocos2d.h"
#include "Hero.h"
#include "Boss.h"
#include <iostream>
#include <vector>

USING_NS_CC;

//a class to holds the boss and hero variable

class GameController
{
public:


	std::vector<Hero*> getHero();
	void addHero(Hero*);
	Boss* getBoss() { return curBoss; }
	void setBoss(Boss *newBoss) { curBoss = newBoss; }
	void addSprites(Sprite*);
	std::vector<Sprite*> getSpriteVec() { return heroSprites; }
	Sprite* getBossSprite() { return bossSprite; }
	void setCallBackFunc(CallFunc* callFunc) { callBackFunc = callFunc; }
	CallFunc* getCallBackFunc() { return callBackFunc; }
	
	


	Label* bossHpLabel;
	

	bool isFirstAttack = true;
private:
	Boss *curBoss;
	std::vector<Hero*>heroList ;
	std::vector<Sprite*>heroSprites;
	CallFunc* callBackFunc;
	Sprite* bossSprite;
	
	//std::vector<Node*>nodeVec;

};
#endif // !GAME_H

#pragma once
