// ---------------------------------------
// Sprite definitions for ElbisAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "ElbisAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void ElbisAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Hero/Elbis/elbis.plist");
};

void ElbisAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("Hero/Elbis/elbis.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string ElbisAnim::atk_1   = "atk_1.png";
const std::string ElbisAnim::atk_10  = "atk_10.png";
const std::string ElbisAnim::atk_11  = "atk_11.png";
const std::string ElbisAnim::atk_12  = "atk_12.png";
const std::string ElbisAnim::atk_13  = "atk_13.png";
const std::string ElbisAnim::atk_14  = "atk_14.png";
const std::string ElbisAnim::atk_2   = "atk_2.png";
const std::string ElbisAnim::atk_3   = "atk_3.png";
const std::string ElbisAnim::atk_4   = "atk_4.png";
const std::string ElbisAnim::atk_5   = "atk_5.png";
const std::string ElbisAnim::atk_6   = "atk_6.png";
const std::string ElbisAnim::atk_7   = "atk_7.png";
const std::string ElbisAnim::atk_8   = "atk_8.png";
const std::string ElbisAnim::atk_9   = "atk_9.png";
const std::string ElbisAnim::idle_1  = "idle_1.png";
const std::string ElbisAnim::idle_2  = "idle_2.png";
const std::string ElbisAnim::idle_3  = "idle_3.png";
const std::string ElbisAnim::idle_4  = "idle_4.png";
const std::string ElbisAnim::magic_1 = "magic_1.png";
const std::string ElbisAnim::magic_2 = "magic_2.png";
const std::string ElbisAnim::magic_3 = "magic_3.png";
const std::string ElbisAnim::magic_4 = "magic_4.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* ElbisAnim::createAtk_1Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_1);
}

Sprite* ElbisAnim::createAtk_10Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_10);
}

Sprite* ElbisAnim::createAtk_11Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_11);
}

Sprite* ElbisAnim::createAtk_12Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_12);
}

Sprite* ElbisAnim::createAtk_13Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_13);
}

Sprite* ElbisAnim::createAtk_14Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_14);
}

Sprite* ElbisAnim::createAtk_2Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_2);
}

Sprite* ElbisAnim::createAtk_3Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_3);
}

Sprite* ElbisAnim::createAtk_4Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_4);
}

Sprite* ElbisAnim::createAtk_5Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_5);
}

Sprite* ElbisAnim::createAtk_6Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_6);
}

Sprite* ElbisAnim::createAtk_7Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_7);
}

Sprite* ElbisAnim::createAtk_8Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_8);
}

Sprite* ElbisAnim::createAtk_9Sprite()
{
    return Sprite::createWithSpriteFrameName(atk_9);
}

Sprite* ElbisAnim::createIdle_1Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_1);
}

Sprite* ElbisAnim::createIdle_2Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_2);
}

Sprite* ElbisAnim::createIdle_3Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_3);
}

Sprite* ElbisAnim::createIdle_4Sprite()
{
    return Sprite::createWithSpriteFrameName(idle_4);
}

Sprite* ElbisAnim::createMagic_1Sprite()
{
    return Sprite::createWithSpriteFrameName(magic_1);
}

Sprite* ElbisAnim::createMagic_2Sprite()
{
    return Sprite::createWithSpriteFrameName(magic_2);
}

Sprite* ElbisAnim::createMagic_3Sprite()
{
    return Sprite::createWithSpriteFrameName(magic_3);
}

Sprite* ElbisAnim::createMagic_4Sprite()
{
    return Sprite::createWithSpriteFrameName(magic_4);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> ElbisAnim::getATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(14);
    frames.pushBack(frameCache->getSpriteFrameByName(atk_1));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_2));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_3));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_4));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_5));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_6));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_7));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_8));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_9));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_10));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_11));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_12));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_13));
    frames.pushBack(frameCache->getSpriteFrameByName(atk_14));
    return frames;
}

Vector<SpriteFrame*> ElbisAnim::getIDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(idle_1));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_2));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_3));
    frames.pushBack(frameCache->getSpriteFrameByName(idle_4));
    return frames;
}

Vector<SpriteFrame*> ElbisAnim::getMAGICAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(magic_1));
    frames.pushBack(frameCache->getSpriteFrameByName(magic_2));
    frames.pushBack(frameCache->getSpriteFrameByName(magic_3));
    frames.pushBack(frameCache->getSpriteFrameByName(magic_4));
    return frames;
}


// ----------
// animations
// ----------

Animate *ElbisAnim::createATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getATKAnimationFrames(), delay, loops));
}
Animate *ElbisAnim::createIDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getIDLEAnimationFrames(), delay, loops));
}
Animate *ElbisAnim::createMAGICAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getMAGICAnimationFrames(), delay, loops));
}

}; // namespace

