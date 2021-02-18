// ---------------------------------------
// Sprite definitions for DragonAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "DragonAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void DragonAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Boss/dragon/dragon.plist");
};

void DragonAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("Boss/dragon/dragon.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string DragonAnim::dragon_atk_1  = "dragon_atk_1.png";
const std::string DragonAnim::dragon_atk_2  = "dragon_atk_2.png";
const std::string DragonAnim::dragon_idle_1 = "dragon_idle_1.png";
const std::string DragonAnim::dragon_idle_2 = "dragon_idle_2.png";
const std::string DragonAnim::dragon_idle_3 = "dragon_idle_3.png";
const std::string DragonAnim::dragon_idle_4 = "dragon_idle_4.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* DragonAnim::createDragon_atk_1Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_atk_1);
}

Sprite* DragonAnim::createDragon_atk_2Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_atk_2);
}

Sprite* DragonAnim::createDragon_idle_1Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_idle_1);
}

Sprite* DragonAnim::createDragon_idle_2Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_idle_2);
}

Sprite* DragonAnim::createDragon_idle_3Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_idle_3);
}

Sprite* DragonAnim::createDragon_idle_4Sprite()
{
    return Sprite::createWithSpriteFrameName(dragon_idle_4);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> DragonAnim::getDRAGON_ATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(2);
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_atk_1));
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_atk_2));
    return frames;
}

Vector<SpriteFrame*> DragonAnim::getDRAGON_IDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_idle_1));
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_idle_2));
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_idle_3));
    frames.pushBack(frameCache->getSpriteFrameByName(dragon_idle_4));
    return frames;
}


// ----------
// animations
// ----------

Animate *DragonAnim::createDRAGON_ATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getDRAGON_ATKAnimationFrames(), delay, loops));
}
Animate *DragonAnim::createDRAGON_IDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getDRAGON_IDLEAnimationFrames(), delay, loops));
}

}; // namespace

