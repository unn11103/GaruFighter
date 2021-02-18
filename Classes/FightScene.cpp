#include "FightScene.h"
#include "HelloWorldScene.h"


USING_NS_CC;

//create scene 
Scene* FightScene::createScene()
{
	return FightScene::create();
}

std::string FightScene::bossName = "LOL";

//initialized the scene
bool FightScene::init() 
{	
	
	CCLOG("%c",bossName);

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
	
	//pushing the position in vector
	Vec2 pos1Hero(500, 600);
	Vec2 pos2Hero(500, 500);
	Vec2 pos3Hero(500, 400);
	Vec2 pos4Hero(500, 300);
	spritePos.push_back(pos1Hero);
	spritePos.push_back(pos2Hero);
	spritePos.push_back(pos3Hero);
	
	//for boss positiion
	Vec2 posBoss(190, 480);

	//vector for hero's icon
	std::vector<Vec2>iconPos;
	Vec2 icon1(0, 190);
	Vec2 icon2(0, 140);
	Vec2 icon3(0, 90);
	iconPos.push_back(icon1);
	iconPos.push_back(icon2);
	iconPos.push_back(icon3);
	
	//creating buff sprites
	buffSp1 = Sprite::create("sK_Icon/status_1001.png");
	buffSp2 = Sprite::create("sK_Icon/status_1001.png");
	buffSp3 = Sprite::create("sK_Icon/status_1001.png");
	buffSp1->setPosition(200, 190);
	buffSp2->setPosition(200, 140);
	buffSp3->setPosition(200, 90);
	buffSp1->setAnchorPoint(Vec2(0, 0));
	buffSp2->setAnchorPoint(Vec2(0, 0));
	buffSp3->setAnchorPoint(Vec2(0, 0));
	buffSp1->setScale(0.7);
	buffSp2->setScale(0.7);
	buffSp3->setScale(0.7);
	buffSp1->setVisible(false);
	buffSp2->setVisible(false);
	buffSp3->setVisible(false);
	this->addChild(buffSp1);
	this->addChild(buffSp2);
	this->addChild(buffSp3);



	//creating game background
	if (bossName == "GARUDA") {
		FightScene::createGaruda();
		bg = Sprite::create("common_003.jpg");
	}
	if (bossName == "FIEND") {
		FightScene::createFiend();
		bg = Sprite::create("common_008.jpg");
	}
	if (bossName == "DRAGON") {
		FightScene::createDragon();
		bg = Sprite::create("common_025.jpg");
	}
	
	bg->setAnchorPoint(Vec2(0, 1));
	bg->setPosition(0,720);
	bg->setScaleX((visibleSize.width / bg->getContentSize().width) * 1);
	this->addChild(bg, 0);
	

	//Creating scene hud
	auto topHud = Sprite::create("UI/header.png");
	topHud->setAnchorPoint(Vec2(0, 1));
	topHud->setPosition(0, visibleSize.height);
	topHud->setScaleX((visibleSize.width / topHud->getContentSize().width) * 1);
	this->addChild(topHud, 1);

	auto menuHud = Sprite::create("UI/playerBar.png");
	menuHud->setAnchorPoint(Vec2(0, 1));
	menuHud->setPosition(0, 0);
	menuHud->setScaleX((visibleSize.width / menuHud->getContentSize().width) * 1);
	bg->addChild(menuHud, 0);
	

	//adding current hero to the game class vector
	game.addHero(folka);
	game.addHero(malphaise);
	game.addHero(alice);
	
	//looping through vector
	std::vector<Hero *> hero = game.getHero();

	for (int i = 0; i < hero.size(); i++) {
		game.addSprites(hero[i]->getSprite());
	}

	std::vector<Sprite*>heroSprites = game.getSpriteVec();
	std::vector<Sprite*>heroIcon;
	//Creating base animation and set the TAG to be use in function.
	for (int i = 0; i < heroSprites.size(); i++) {
		heroSprites[i]->runAction(hero[i]->getIdleAnim());
		heroSprites[i]->setPosition(Vec2(999,500));
		auto moveBack = MoveTo::create(0.7, spritePos[i]);
		heroSprites[i]->setScale(1.5);
		heroSprites[i]->setTag(i);
		heroSprites[i]->runAction(moveBack);

		heroIcon.push_back(hero[i]->getIcon());
		heroIcon[i]->setPosition(iconPos[i]);
		heroIcon[i]->setAnchorPoint(Vec2(0, 0));
		heroIcon[i]->setScale(1.3);
		this->addChild(heroSprites[i],2);
		this->addChild(heroIcon[i]);

	}

/***********************************************/

	//ATTACK BUTTON TO CALLBACK ATTACK COMMAND
	attackButton = MenuItemImage::create("UI/atkBtn_0.png",
		"UI/atkBtn_1.png",
		CC_CALLBACK_1(FightScene::attack, this));
	
	atkMenu = Menu::create(attackButton, NULL);
	atkMenu->setAnchorPoint(Vec2(1,0));
	atkMenu->setPosition(500,293);
	atkMenu->setName("attackButton");

	this->addChild(atkMenu);

/***********************************************/

	//HEAL BUTTON TO CALLBACK HEAL COMMAND
	healButton = MenuItemImage::create("sK_Icon/heal.png", "sK_Icon/heal.png", CC_CALLBACK_1(FightScene::doHeal, this));
	healMenu = Menu::create(healButton, NULL);
	healMenu->setAnchorPoint(Vec2(0, 0));
	healMenu->setPosition(500,210);
	healMenu->setScale(0.8);

	this->addChild(healMenu);


/***********************************************/

	//MAGIC BUTTON TO CALLBACK MAGIC COMMAND
	magicAttackButton = MenuItemImage::create("sK_Icon/atkBuff.png", "sK_Icon/atkBuff.png", CC_CALLBACK_1(FightScene::doMagicAttack, this));
	magicAttackMenu = Menu::create(magicAttackButton, NULL);
	magicAttackMenu->setAnchorPoint(Vec2(0, 0));
	magicAttackMenu->setPosition(500, 150);
	magicAttackMenu->setScale(0.8);

	this->addChild(magicAttackMenu);


/***********************************************/

	//BUFF BUTTON TO CALLBACK BUFF COMMAND
	buffButton = MenuItemImage::create("sK_Icon/dmgBuff.png", "sK_Icon/dmgBuff.png", CC_CALLBACK_1(FightScene::doAtkBuff, this));
	buffMenu = Menu::create(buffButton, NULL);
	buffMenu->setAnchorPoint(Vec2(0, 0));
	buffMenu->setPosition(500, 90);
	buffMenu->setScale(0.8);

	this->addChild(buffMenu);



/***********************************************/
	//Setting up boss for the game

	auto curBoss = game.getBoss();
	auto bossSprite = curBoss->getSprite();
	bossSprite->runAction(curBoss->getIdleAnim());
	bossSprite->setPosition(Vec2(-999,460));
	auto bossMove = MoveTo::create(0.7, posBoss);
	bossSprite->setScale(2);
	bossSprite->setName("Boss");
	bossSprite->runAction(bossMove);
	this->addChild(bossSprite);
	
	
	int bossHp = game.getBoss()->getHealth();
	std::string strBHP = std::to_string(bossHp);
	bossLabel = Label::createWithTTF( bossName +" HP : "+strBHP, "basic.ttf", 20);
	bossLabel->setAnchorPoint(Vec2(0, 0));
	bossLabel->setPosition(100, 630);

	auto bossIcon = game.getBoss()->getIcon();
	bossIcon->setPosition(0, 600);
	bossIcon->setAnchorPoint(Vec2(0, 0));
	bossIcon->setScale(0.5);
	this->addChild(bossIcon,5);
	this->addChild(bossLabel,5);



/*****************************************************/

	//Creating label for hero

	int hero1Hp = hero[0]->getHealth();
	int hero2Hp = hero[1]->getHealth();
	int hero3Hp = hero[2]->getHealth();
	std::string h1Str = std::to_string(hero1Hp);
	std::string h2Str = std::to_string(hero2Hp);
	std::string h3Str = std::to_string(hero3Hp);

	hero1Label = Label::createWithTTF("HP : " + h1Str, "basic.ttf", 20);
	hero2Label = Label::createWithTTF("HP : " + h2Str, "basic.ttf", 20);
	hero3Label = Label::createWithTTF("HP : " + h3Str, "basic.ttf", 20);

	hero1Label->setAnchorPoint(Vec2(0, 0));
	hero2Label->setAnchorPoint(Vec2(0, 0));
	hero3Label->setAnchorPoint(Vec2(0, 0));

	hero1Label->setPosition(100, 190);
	hero2Label->setPosition(100, 140);
	hero3Label->setPosition(100, 90);

	this->addChild(hero1Label);
	this->addChild(hero2Label);
	this->addChild(hero3Label);

	nextButton = MenuItemImage::create("UI/next_button.png",
		"UI/next_button.png",
		CC_CALLBACK_1(FightScene::nextCallback, this));

	menu2 = Menu::create(nextButton, NULL);
	menu2->setAnchorPoint(Vec2(1, 0));
	menu2->setPosition(550, 293);
	menu2->setName("nextButton");
	menu2->setVisible(false);
	this->addChild(menu2);
	
	

	this->scheduleUpdate();

	return true;

}


void FightScene::update(float dt) {
	//If not final scene, run normal behaviour

	if (isFinalFight == false) {
		FightScene::checkMusic();
		FightScene::changeLabelHealth();
		FightScene::checkGameOver();
		FightScene::checkSkillCd();
		
	}

	if (isFinalFight == true) {
		
		menu2->setVisible(false);
		
	}
	
}


//When press the attack button it's means that the turn has started
void FightScene::attack(Ref* pSender) {
	AudioEngine::play2d("Audio/sfx/btn_se_05.mp3", false, 1.0, NULL);

	//Normal behaviour if it's not final fight
	if (isFinalFight == false) {
		auto boss = game.getBoss();
		auto hero = game.getHero();
		auto bossSprite = this->getChildByName("Boss"); //getting boss sprite by using getChildByName() method.
		auto attackButton = this->getChildByName("attackButton"); //getting by using getChildByName() method.

		attackButton->setVisible(false);

		if (boss->getHealth() > 0) {

			auto delay = DelayTime::create(2); //creating some time delay to be used in sequences
			auto audioDelay = DelayTime::create(0.5);

			//looping through the vector of heroes
			for (int i = 0; i < game.getHero().size(); i++) {
				if (hero[i]->isActive == true) {
					auto moveBy = MoveTo::create(0.2, Vec2(300, 500)); //moving animation
					auto moveBack = MoveTo::create(0.2, spritePos[i]); //moving back animation
					auto curAnim = this->getChildByTag(i);
					auto seq = Sequence::create(moveBy, hero[i]->getAttackAnim(), moveBack, hero[i]->getIdleAnim(), NULL); //generating sequence
					auto sfxSeq = Sequence::create(music.getbossHitSe(), audioDelay, music.getbossHitSe(), audioDelay,
						music.getbossHitSe(), audioDelay, music.getbossHitSe(), NULL);

					curAnim->stopAllActions(); //stop all the actions 
					curAnim->runAction(seq);// run it again

					this->runAction(sfxSeq);

					//if there is a buff active, enhance the damage for hero
					if (isAtkBuffActive == true) {
						boss->setHealth(hero[i]->getDmg() + 100);
					}
					else {
						boss->setHealth(hero[i]->getDmg());
					}

					bossSprite->runAction(boss->getAtkAnim());

				}


			}

			//Creating lambda functions to create function w/delay
			auto bossDoingAtk = CallFunc::create([=]() {
				auto heroRand = RandomHelper::random_int(0, 2);
				CCLOG("%i random no", heroRand);
				while (1) {
					if (hero[heroRand]->isActive == true)
						break;
					heroRand = RandomHelper::random_int(0, 2);
				}

				hero[heroRand]->takeAtk(boss->getDmg());
				attackButton->setVisible(true);
				bossSprite->runAction(boss->getAtkAnim());

				AudioEngine::play2d("Audio/sfx/npc_3040092000_02_se_1.mp3");
			}
			);

			auto seq2 = Sequence::create(delay, bossDoingAtk, NULL);
			this->runAction(seq2);


			game.isFirstAttack = false;


		}

		//checking cooldowns
		if (isHealCooldown == true) {
			healcdTime++;
		}
		if (isMagicAttackCooldown == true) {
			magicCdTime++;
		}
		if (isAtkBuffCooldown == true) {
			atkBuffcdTime++;
		}
		if (isAtkBuffActive == true) {
			atkBuffTime++;
		}
	}

	//behaviour if it is a final fight.
	else {
		atkMenu->setVisible(false);
		auto delay = DelayTime::create(5);
		auto func = CallFunc::create([&]() {
			game.getBoss()->setHealth(9999999);
			FightScene::checkGameOver();
		});
		auto moveBy = MoveTo::create(5, Vec2(300, 500));
		auto seq = Sequence::create(moveBy,catSp->runAction(cat->getAttackAnim()),func, NULL);
		catSp->runAction(seq);
		
	}
		
}

void FightScene::doHeal(Ref* pSender) {
	
	AudioEngine::play2d("Audio/sfx/ab_3000_se_1.mp3");
	auto hero = game.getHero();
	auto folkaSp = this->getChildByTag(0);
	
	auto seq = Sequence::create(hero[0]->getMagicAnim(), hero[0]->getIdleAnim(), NULL);
	folkaSp->stopAllActions();
	folkaSp->runAction(seq);


	CCLOG("HEAL!");
	
	for (int i = 0; i < game.getHero().size(); i++) {
		if (hero[i]->getHealth() > 0 && hero[i]->getHealth()<hero[i]->getMaxHp()) {

			
			hero[i]->setHealth(hero[i]->getHealth()+500);
			if (hero[i]->getHealth() > hero[i]->getMaxHp()) {
				hero[i]->setHealth(hero[i]->getMaxHp());
			}

		}

	}
	healMenu->setVisible(false);
	isHealCooldown = true;
	
}

void FightScene::doMagicAttack(Ref* pSender) {

	AudioEngine::play2d("Audio/sfx/phit_ax_0021_se_1.mp3");
	auto boss = game.getBoss();
	auto hero = game.getHero();
	auto malSp = this->getChildByTag(1);

	auto seq = Sequence::create(hero[1]->getMagicAnim(), hero[1]->getIdleAnim(), NULL);
	malSp->stopAllActions();
	malSp->runAction(seq);
	boss->setHealth(1000);

	auto bossSprite = this->getChildByName("Boss");
		bossSprite->runAction(boss->getAtkAnim());

	magicAttackMenu->setVisible(false);
	isMagicAttackCooldown = true;

}

void FightScene::doAtkBuff(Ref* pSender) {
	AudioEngine::play2d("Audio/sfx/ab_0000_se_1.mp3");
	isAtkBuffActive = true;
	buffButton->setVisible(false);
	isAtkBuffCooldown = true;

}

void FightScene::changeLabelHealth() {
	bossLabel->setTextColor(Color4B::ORANGE);

	auto hero = game.getHero();

	int hero1Hp = hero[0]->getHealth();
	int hero2Hp = hero[1]->getHealth();
	int hero3Hp = hero[2]->getHealth();

	int bossHp = game.getBoss()->getHealth();

	

	std::string h1Str = std::to_string(hero1Hp);
	std::string h2Str = std::to_string(hero2Hp);
	std::string h3Str = std::to_string(hero3Hp);

	if (hero1Hp <= 0) { hero[0]->isActive = false; hero1Label->setString("KO"); }
	else { hero1Label->setString("HP : " + h1Str); }
	if (hero2Hp <= 0) { hero[1]->isActive = false; hero2Label->setString("KO"); }
	else { hero2Label->setString("HP : " + h2Str); }
	if (hero3Hp <= 0) { hero[2]->isActive = false; hero3Label->setString("KO"); }
	else { hero3Label->setString("HP : " + h3Str); }

	std::string strHP = std::to_string(bossHp);

	bossLabel->setString(bossName + " HP : " + strHP);

	bossLabel->setVisible(false);
}

void FightScene::checkMusic() {
	float bossPercent = game.getBoss()->getHealth()*100 / game.getBoss()->getMaxHp();
	CCLOG("%f", bossPercent);

	if (isFirstPhase == true) {
		if (bossPercent < 100 && bossPercent > 75) {
			
			isMusicActive = false;
			isFirstPhase = false;
		}
	}

	if (bossPercent < 75 && bossPercent >60) {
		
		if (isSecondPhase == false) {
			isMusicActive = false;
			isSecondPhase = true;
		}
	}
	if (bossPercent < 60 && bossPercent >50) {
		if (isThirdPhase == false) {
			isMusicActive = false;
			isThirdPhase = true;
		}

	}
	if (bossPercent < 50 && bossPercent >30) {
		if (isFourthPhase == false) {
			isMusicActive = false;
			isFourthPhase = true;
		}

	}
	if (bossPercent < 30 && bossPercent >20) {
		if (isFifthPhase == false) {
			isMusicActive = false;
			isFifthPhase = true;
		}

	}
	if (bossPercent < 20 ) {
		if (isSixthPhase == false) {
			isMusicActive = false;
			isSixthPhase = true;
		}

	}
	if (bossPercent <= 0) {
		if (isDonePhase == false) {
			isMusicActive = false;
			isDonePhase = true;
		}
		

	}


	if (isMusicActive == false) {
		if (bossPercent == 100 ) {
			AudioEngine::play2d("Audio/sfx/raid_appear_se_1.mp3",false,0.6,NULL);

			if (bossName == "GARUDA") {
				
				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[0], true, 0.7, NULL);
				

			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[0], true, 0.7, NULL);
				
			}
			isMusicActive = true;
		}
		if (bossPercent < 100 && bossPercent >75  ) {
			AudioEngine::stop(currentMusic);

			if (bossName == "GARUDA") {

				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[1], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[1], true, 0.7, NULL);
			}
			isMusicActive = true;

		}
		if (bossPercent < 75 && bossPercent >60 ) {
			AudioEngine::stop(currentMusic);

			if(bossName == "GARUDA"){
				
				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[2], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[2], true, 0.7, NULL);
			}

			isMusicActive = true;

		}
		if (bossPercent < 60 && bossPercent >50) {
			AudioEngine::stop(currentMusic);

			if (bossName == "GARUDA") {

				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[3], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[3], true, 0.7, NULL);
			}

			isMusicActive = true;

		}
		if (bossPercent < 50 && bossPercent >30) {
			AudioEngine::stop(currentMusic);

			if (bossName == "GARUDA") {

				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[4], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[4], true, 0.7, NULL);
			}

			isMusicActive = true;

		}
		if (bossPercent < 30 && bossPercent >20) {
			AudioEngine::stop(currentMusic);

			if (bossName == "GARUDA") {

				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[5], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[5], true, 0.7, NULL);
			}

			isMusicActive = true;

		}
		if (bossPercent < 20) {
			AudioEngine::stop(currentMusic);

			if (bossName == "GARUDA") {

				currentMusic = AudioEngine::play2d(music.getGarudaMusic()[6], true, 0.7, NULL);
			}
			else if (bossName == "FIEND") {
				currentMusic = AudioEngine::play2d(music.getFiendMusic()[6], true, 0.7, NULL);
			}

			isMusicActive = true;
		

		}
		



	}


}

void FightScene::checkSkillCd() {
	
	if (isAtkBuffActive == true && atkBuffTime % 4 == 0) {
		isAtkBuffActive = false;
		atkBuffTime = 1;
	}

	if (isHealCooldown == true && healcdTime % 4 == 0) {
		healcdTime = 1;
		isHealCooldown = false;
		healMenu->setVisible(true);
	}

	if (isMagicAttackCooldown == true && magicCdTime % 4 == 0) {
		magicCdTime = 1;
		isMagicAttackCooldown = false;
		magicAttackMenu->setVisible(true);
	}
	if (isAtkBuffCooldown == true && atkBuffcdTime % 6 == 0) {
		atkBuffcdTime = 1;
		isAtkBuffCooldown = false;
		buffButton->setVisible(true);
	}

	if (isAtkBuffActive == true) {
		buffSp1->setVisible(true);
		buffSp2->setVisible(true);
		buffSp3->setVisible(true);
	}
	else {
		buffSp1->setVisible(false);
		buffSp2->setVisible(false);
		buffSp3->setVisible(false);
	}


}

void FightScene::nextCallback(cocos2d::Ref* pSender) {
	
	//if the boss is not lass boss i.e., dragon, normal behavior.
	if (bossName != "DRAGON") {
		AudioEngine::stopAll();
		auto scene = HelloWorld::createScene();
		Director::getInstance()->replaceScene(scene); //go back to the select boss scene
	}
	else {
		if (isFinalFight == false) {
			AudioEngine::stopAll();
			
			isFinalFight = true;
			FightScene::finalFight();
		}

	}



}

void FightScene::checkGameOver() {
	auto bossSprite = this->getChildByName("Boss");
	auto spVec = game.getSpriteVec();

	if (game.getHero()[0]->isActive == false) {
		healMenu->setVisible(false);
	}
	if (game.getHero()[1]->isActive == false) {
		magicAttackMenu->setVisible(false);
	}
	if (game.getHero()[2]->isActive == false) {
		buffMenu->setVisible(false);
	}


	for (int i = 0; i < game.getHero().size(); i++) {
		if (game.getHero()[i]->isActive == false) {

			auto deadSpr = game.getHero()[i]->getDead();
			deadSpr->setScale(1.3);
			spVec[i]->setSpriteFrame(deadSpr->getSpriteFrame());

		}
	}

	//if the boss dead or all hero is dead. The next button will appear
	if (game.getBoss()->getHealth() <= 0 || (game.getHero()[0]->isActive == false && game.getHero()[1]->isActive == false && game.getHero()[2]->isActive == false)) {
		if (game.getBoss()->getHealth() <= 0) {
			if (isFaded == false) {
				AudioEngine::stop(currentMusic);
				AudioEngine::play2d("Audio/sfx/deadboss_se_4.mp3");
				currentMusic = AudioEngine::play2d("Audio/sfx/win.mp3", true, 0.7, NULL);
				auto fadeOut = FadeOut::create(2);
				bossSprite->setColor(Color3B::RED);
				bossSprite->runAction(fadeOut);
				isFaded = true;
				HelloWorld::winCount += 1;
			}

		}

		bossLabel->setVisible(false);
		atkMenu->setVisible(false);

		//NEXT BUTTON TO CALLBACK NEXTSCENE COMMAND
		menu2->setVisible(true);

	}
}

void FightScene::finalFight() {
	auto cb = CallFunc::create([&]() {

		atkMenu->setVisible(true);
	});
	auto musicCb = CallFunc::create([&]() {
		currentMusic = AudioEngine::play2d("Audio/lastOst.mp3", true, 0.7, NULL);
	
	});

	auto delay = DelayTime::create(1);
	CatAnim::addSpriteFramesToCache();
	catSp = CatAnim::createCat_idle1Sprite();
	catSp->runAction(cat->getIdleAnim());
	catSp->setPosition(900, 500);
	
	auto seq = Sequence::create(DelayTime::create(3),musicCb,MoveTo::create(8, Vec2(450, 500)),cb, NULL);
	catSp->runAction(seq);
	catSp->setScale(3);
	this->addChild(catSp);
	
	for (int i = 0; i < game.getSpriteVec().size(); i++) {
		game.getSpriteVec()[i]->setVisible(false);
	}
	
	
	



	


}

void FightScene::createGaruda() {
	CCLOG("GARUDA GENERATED!");
	Garuda* garuda = new Garuda;
	game.setBoss(garuda);


}

void FightScene::createFiend() {
	CCLOG("FIEND GENERATED!");
	Fiend* fiend = new Fiend;
	game.setBoss(fiend);
}

void FightScene::createDragon() {
	CCLOG("DRAGON GENERATED!");
	Dragon* dragon = new Dragon;
	game.setBoss(dragon);
}

