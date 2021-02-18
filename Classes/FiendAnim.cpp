// ---------------------------------------
// Sprite definitions for FiendAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "FiendAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void FiendAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Boss/fiend.plist");
};

void FiendAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("Boss/fiend.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string FiendAnim::atk_1  = "atk_1.png";
const std::string FiendAnim::atk_2  = "atk_2.png";
const std::string FiendAnim::idle_1 = "idle_1.png";
const std::string FiendAnim::idle_2 = "idle_2.png";
const std::string FiendAnim::idle_3 = "idle_3.png";
const std::string FiendAnim::idle_4 = "idle_4.png";
const std::string FiendAnim::idle_5 = "idle_5.png";
const std::string FiendAnim::idle_6 = "idle_6.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* FiendAnim::createAtk_1Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_1);
}

Sprite* FiendAnim::createAtk_2Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_2);
}

Sprite* FiendAnim::createIdle_1Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_1);
}

Sprite* FiendAnim::createIdle_2Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_2);
}

Sprite* FiendAnim::createIdle_3Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_3);
}

Sprite* FiendAnim::createIdle_4Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_4);
}

Sprite* FiendAnim::createIdle_5Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_5);
}

Sprite* FiendAnim::createIdle_6Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_6);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> FiendAnim::getATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(2);
    frames.pushBack(frameCache->getSpriteFrameByName(atk_1));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_2));
    return frames;
}

Vector<SpriteFrame*> FiendAnim::getIDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(6);
    frames.pushBack(frameCache->getSpriteFrameByName(idle_1));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_2));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_3));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_4));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_5));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_6));
    return frames;
}


// ----------
// animations
// ----------

Animate *FiendAnim::createATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getATKAnimationFrames(), delay, loops));
}
Animate *FiendAnim::createIDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getIDLEAnimationFrames(), delay, loops));
}

}; // namespace

