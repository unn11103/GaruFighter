#ifndef __FIGHT_SCENE_H__
#define __FIGHT_SCENE_H__

#include <vector>
#include "cocos2d.h"
#include "Hero.h"
#include "Boss.h"
#include "folkaAnim.hpp"
#include "garuAnim.hpp"
#include "malAnim.hpp"
#include "Game.h"
#include "Music.h"
#include <string>


using namespace TexturePacker;

class FightScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void update(float dt);
	
	

	// implement the "static create()" method manually
	CREATE_FUNC(FightScene);

	Music music;
	int currentMusic; //current music in the game 

	Label* bossLabel; //boss hp label
	Label* hero1Label; //1'st hero label
	Label* hero2Label; //2'nd hero label
	Label* hero3Label; //3'rd hero label

	Sprite* buffSp1; //return buff sprites
	Sprite* buffSp2;
	Sprite* buffSp3;
	
    GameController game; //using game class

	Sprite* bg; //background image

	MenuItemImage* attackButton; //image for attack button
	MenuItemImage* healButton; //image for heal button
	MenuItemImage* magicAttackButton; //image for magic attack button
	MenuItemImage* buffButton; //image for atk buff button
	MenuItemImage* nextButton; // image for next button

	Menu* atkMenu; //attack menu 
	Menu* healMenu; //healing menu
	Menu* magicAttackMenu; //magic attacking menu
	Menu* buffMenu; //buffing menu
	Menu* menu2; // next menu


	static std::string bossName; // static for the incoming boss name
	std::vector<Vec2>spritePos; // vector for the hero's position

	//creating heroes
	Folka *folka = new Folka; 
	Malphaise *malphaise = new Malphaise;
	Alice *alice = new Alice;
	Cat *cat = new Cat;

	Sprite *catSp; //special sprite for cat

	void checkSkillCd(); //to check if skill cooldown

	//boolean for cooldowns
	bool isHealCooldown = false;
	int healcdTime = 1;
	bool isMagicAttackCooldown = false;
	int magicCdTime = 1;
	bool isAtkBuffCooldown = false;
	int atkBuffcdTime = 1;
	bool isAtkBuffActive = false;

	int atkBuffTime = 1;//turn for buff effect to be activated
	
	// callback functions for buttons
	void attack(cocos2d::Ref* pSender);
	void doHeal(cocos2d::Ref* pSender);
	void doMagicAttack(cocos2d::Ref* pSender);
	void doAtkBuff(cocos2d::Ref* pSender);

	//creating boss to scene
	void createGaruda();
	void createFiend();
	void createDragon();
	void nextCallback(cocos2d::Ref* pSender);

	
	void changeLabelHealth(); //changing label for health
	void checkGameOver();//check is game is already over

	void checkMusic(); //check the current music

	//boolean for music phases
	bool isMusicActive = false;
	bool isFirstPhase = true;
	bool isSecondPhase = false;
	bool isThirdPhase = false;
	bool isFourthPhase = false;
	bool isFifthPhase = false;
	bool isSixthPhase = false;
	bool isDonePhase = false;
	
	//to check if boss is fading
	bool isFaded = false;

	//last fight special function
	void finalFight();
	bool isFinalFight = false;






	
};



#pragma once
#endif 
