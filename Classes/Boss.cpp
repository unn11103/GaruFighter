#include "Boss.h"

Sprite* Garuda::getSprite(){
	GaruAnim::addSpriteFramesToCache();
	
	return GaruAnim::createGaruIdle_1Sprite();

}
Sprite* Garuda::getIcon() {
	return Sprite::create("Garuda/garuIcon.png");
}

Animate* Garuda::getIdleAnim() {

	GaruAnim::addSpriteFramesToCache();
	return GaruAnim::createGARUIDLEAnimateAction(0.15f, -1);

}
Animate* Garuda::getAtkAnim() {

	GaruAnim::addSpriteFramesToCache();
	return GaruAnim::createGARUATKAnimateAction(0.2f, 3);
}
//////////////////////////////////////////////////////////////////////////////

Sprite* Fiend::getSprite() {
	FiendAnim::addSpriteFramesToCache();
	return FiendAnim::createIdle_1Sprite();
}
Sprite* Fiend::getIcon() {
	return Sprite::create("Boss/fiendIcon.png");
}
Animate* Fiend::getIdleAnim() {

	FiendAnim::addSpriteFramesToCache();
	return FiendAnim::createIDLEAnimateAction(0.15f, -1);
}
Animate* Fiend::getAtkAnim(){
	FiendAnim::addSpriteFramesToCache();
	return FiendAnim::createATKAnimateAction(0.2f, 3);

}
//////////////////////////////////////////////////////////////////////////////
Sprite* Dragon::getSprite() {
	FiendAnim::addSpriteFramesToCache();
	return FiendAnim::createIdle_1Sprite();
}
Sprite* Dragon::getIcon() {
	return Sprite::create("Boss/dragon/dragon_icon.png");
}
Animate* Dragon::getIdleAnim() {

	DragonAnim::addSpriteFramesToCache();
	return DragonAnim::createDRAGON_IDLEAnimateAction(0.15f, -1);
}
Animate* Dragon::getAtkAnim() {
	DragonAnim::addSpriteFramesToCache();
	return DragonAnim::createDRAGON_ATKAnimateAction(0.2f, 3);

}