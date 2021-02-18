#include "Game.h"

std::vector<Hero*>GameController::getHero() {

	return heroList;

}

void GameController::addHero(Hero* hero) {

	heroList.push_back(hero);

}

void GameController::addSprites(Sprite* sprite) {

	heroSprites.push_back(sprite);

}

