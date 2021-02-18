#include "HelloWorldScene.h"
USING_NS_CC;


int HelloWorld::winCount = 0;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();

}


// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	
    //////////////////////////////
    // 1. super init first
	if (!Scene::init())
	{
		return false;
	}

	
	bgm = AudioEngine::play2d("Audio/bgm.mp3",true,1.0,NULL); //plays the bgm 
	
	

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	///////////////////////////////////////////////////////////////

	//create first boss button
    auto closeItem = MenuItemImage::create(
                                           "Garuda/idle/garuIdle_1.png",
		"Garuda/idle/garuIdle_2.png",
                                           CC_CALLBACK_1(HelloWorld::selectGaruda, this));

        closeItem->setPosition(Vec2(300,(720/4)*3));
    

    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
	
 
	///////////////////////////////////////

	//create second boss button
	auto fiendButton = MenuItemImage::create(
		"Boss/idle/idle_1.png",
		"Boss/idle/idle_2.png",
		CC_CALLBACK_1(HelloWorld::selectFiend, this));

	fiendButton->setPosition(Vec2(300, (720 / 4) * 2));


	auto menu2 = Menu::create(fiendButton, NULL);
	menu2->setPosition(Vec2::ZERO);
	this->addChild(menu2, 1);
   //////////////////////////////////////////////////

	//create lass boss button
	auto dragonButton = MenuItemImage::create(
		"Boss/dragon/idle/dragon_idle_1.png",
		"Boss/dragon/idle/dragon_idle_2.png",
		CC_CALLBACK_1(HelloWorld::selectDragon, this));

	dragonButton->setPosition(Vec2(300, (720 / 4)));


	auto menu3 = Menu::create(dragonButton, NULL);
	menu3->setPosition(Vec2::ZERO);
	menu3->setVisible(false);
	this->addChild(menu3, 1);
	if (winCount >= 2) {
		menu3->setVisible(true);
	}

   




    return true;
}


void HelloWorld::selectGaruda(Ref* pSender)
{
	AudioEngine::play2d("Audio/sfx/queststart_se_1.mp3",false,1.0,NULL);
	fightscene.bossName = "GARUDA";
	auto scene = FightScene::createScene();
	Director::getInstance()->replaceScene(scene);

	AudioEngine::stop(bgm);



}

void HelloWorld::selectFiend(Ref* pSender)
{
	AudioEngine::play2d("Audio/sfx/queststart_se_1.mp3", false, 1.0, NULL);
	fightscene.bossName = "FIEND";
	auto scene = FightScene::createScene();
	Director::getInstance()->replaceScene(scene);

	AudioEngine::stop(bgm);
}

void HelloWorld::selectDragon(Ref* pSender) {
	AudioEngine::play2d("Audio/sfx/queststart_se_1.mp3", false, 1.0, NULL);
	fightscene.bossName = "DRAGON";
	auto scene = FightScene::createScene();
	Director::getInstance()->replaceScene(scene);

	AudioEngine::stop(bgm);
}

