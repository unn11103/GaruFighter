#include"Hero.h"
//-------------------------------



void Hero::setHealth(int num) {
	health = num;
}


Sprite* Folka::getSprite() {
	FolkaAnim::addSpriteFramesToCache();
	Sprite* sprite = FolkaAnim::createIdle1Sprite();
	return sprite;
}

Sprite* Folka::getIcon() {
	return Sprite::create("Folkasheet/folka_icon.png");
}

Sprite* Folka::getDead() {
	return Sprite::create("Folkasheet/folka_dead.png");
}

Animate* Folka::getIdleAnim() {
	FolkaAnim::addSpriteFramesToCache();
	
	auto animate = FolkaAnim::createIDLEAnimateAction(0.1f, -1);
	return animate;
}

Animate* Folka::getAttackAnim() {
	FolkaAnim::addSpriteFramesToCache();
	auto animate = FolkaAnim::createFOLKAATKAnimateAction(0.07f, 1);
	return animate;

}
Animate* Folka::getMagicAnim() {
	FolkaAnim::addSpriteFramesToCache();
	return FolkaAnim::createFOLKA_MAGICAnimateAction(0.3f, 1);
}
//-----------------------------------
Sprite* Malphaise::getSprite() {
	MalAnim::addSpriteFramesToCache();
	Sprite* sprite = MalAnim::createIdleMalIdle_1Sprite();
	return sprite;
}

Sprite* Malphaise::getIcon() {
	return Sprite::create("Hero/Malphaise/mal_icon.png");
}

Sprite* Malphaise::getDead() {
	return Sprite::create("Hero/Malphaise/mal_dead.png");
}
Animate* Malphaise::getIdleAnim() {
	MalAnim::addSpriteFramesToCache();

	auto animate = MalAnim::createIDLE_MALIDLEAnimateAction(0.1f, -1);
	return animate;
}

Animate* Malphaise::getAttackAnim() {
	MalAnim::addSpriteFramesToCache();
	auto animate = MalAnim::createATTACK_MALATKAnimateAction(0.07f, 1);
	return animate;

}
Animate* Malphaise::getMagicAnim() {
	MalAnim::addSpriteFramesToCache();
	return MalAnim::createMAGIC_MALMAGICAnimateAction(0.3f, 1);
}
//------------------------------------
Sprite* Alice::getSprite() {
	AliceAnim::addSpriteFramesToCache();
	Sprite* sprite = AliceAnim::createAIdle1Sprite();
	return sprite;
}

Sprite* Alice::getIcon() {
	return Sprite::create("Hero/Alice/alice_icon.png");
}

Sprite* Alice::getDead() {
	return AliceAnim::createDeadAlice_1Sprite();
}

Animate* Alice::getDeadAnim() {
	AliceAnim::addSpriteFramesToCache();
	return AliceAnim::createDEADALICEAnimateAction(0.07f,-1);
}
Animate* Alice::getIdleAnim() {
	AliceAnim::addSpriteFramesToCache();

	auto animate = AliceAnim::createAIDLEAnimateAction(0.1f, -1);
	return animate;
}

Animate* Alice::getAttackAnim() {
	AliceAnim::addSpriteFramesToCache();
	auto animate = AliceAnim::createAATKAnimateAction(0.07f, 1);
	return animate;

}
Animate* Alice::getMagicAnim() {
	AliceAnim::addSpriteFramesToCache();
	return AliceAnim::createAMAGICAnimateAction(0.3f, 1);
}
//---------------------------------------

Sprite* Cat::getSprite() {
	CatAnim::addSpriteFramesToCache();
	Sprite* sprite = CatAnim::createCat_idle1Sprite();
	return sprite;
}

Sprite* Cat::getIcon() {
	return Sprite::create("Hero/Cat/idle/cat_idle.png");
}

Animate* Cat::getIdleAnim() {
	CatAnim::addSpriteFramesToCache();
	auto animate = CatAnim::createCAT_IDLEAnimateAction(0.1f, -1);
	return animate;
}


Animate* Cat::getAttackAnim() {
	CatAnim::addSpriteFramesToCache();
	auto animate = CatAnim::createCAT_ATKAnimateAction(0.07f, 1);
	return animate;

}




