#include "Music.h"

std::vector<std::string> Music::getGarudaMusic() {
	return garudaMusicVec;
}

std::vector<std::string>Music::getFiendMusic() {
	return fiendMusicVec;
}

CallFunc* Music::getbossHitSe() {
	auto bossHitSe = CallFunc::create([]() {
	
	
	AudioEngine::play2d("Audio/sfx/npc_3040106000_01_se_2.mp3",false,0.3);
	
	
	
	});
		
	return bossHitSe;
}

