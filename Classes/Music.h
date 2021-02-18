#ifndef MUSIC_H
#define MUSIC_H
#include "AudioEngine.h"
#include "cocos2d.h"
#include <vector>
USING_NS_CC;

class Music
{
public:

	
	
	
	std::vector<std::string> getGarudaMusic();
	std::vector<std::string> getFiendMusic();
	
	
	CallFunc* getbossHitSe();

	
	
	//constructor for loading the music's path to vector
	Music() {
		
		std::string a = "Audio/16_battle4_00.mp3";
		std::string a1 = "Audio/16_battle4_01.mp3";
		std::string a2 = "Audio/16_battle4_02.mp3";
		std::string a3 = "Audio/16_battle4_03.mp3";
		std::string a4 = "Audio/16_battle4_04.mp3";
		std::string a5 = "Audio/16_battle4_05.mp3";
		std::string a6 = "Audio/16_battle4_06.mp3";

		std::string b = "Audio/32_yggdrasil_00.mp3";
		std::string b1 = "Audio/32_yggdrasil_01.mp3";
		std::string b2 = "Audio/32_yggdrasil_02.mp3";
		std::string b3 = "Audio/32_yggdrasil_03.mp3";
		std::string b4 = "Audio/32_yggdrasil_04.mp3";
		std::string b5 = "Audio/32_yggdrasil_05.mp3";
		std::string b6 = "Audio/32_yggdrasil_06.mp3";

	


		garudaMusicVec.push_back(a);
		garudaMusicVec.push_back(a1);
		garudaMusicVec.push_back(a2);
		garudaMusicVec.push_back(a3);
		garudaMusicVec.push_back(a4);
		garudaMusicVec.push_back(a5);
		garudaMusicVec.push_back(a6);

		fiendMusicVec.push_back(b);
		fiendMusicVec.push_back(b1);
		fiendMusicVec.push_back(b2);
		fiendMusicVec.push_back(b3);
		fiendMusicVec.push_back(b4);
		fiendMusicVec.push_back(b5);
		fiendMusicVec.push_back(b6);

		
	}


private:
	std::vector<std::string> garudaMusicVec;
	std::vector<std::string> fiendMusicVec;
};








#endif // !MUSIC_H



#pragma once
