// ---------------------------------------
// Sprite definitions for garuAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "garuAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void GaruAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("garuAnim.plist");
};

void GaruAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("garuAnim.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string GaruAnim::garuAtk_1  = "garuAtk_1.png";
const std::string GaruAnim::garuAtk_2  = "garuAtk_2.png";
const std::string GaruAnim::garuIdle_1 = "garuIdle_1.png";
const std::string GaruAnim::garuIdle_2 = "garuIdle_2.png";
const std::string GaruAnim::garuIdle_3 = "garuIdle_3.png";
const std::string GaruAnim::garuIdle_4 = "garuIdle_4.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* GaruAnim::createGaruAtk_1Sprite()
{
    return Sprite::createWithSpriteFrameName(garuAtk_1);
}

Sprite* GaruAnim::createGaruAtk_2Sprite()
{
    return Sprite::createWithSpriteFrameName(garuAtk_2);
}

Sprite* GaruAnim::createGaruIdle_1Sprite()
{
    return Sprite::createWithSpriteFrameName(garuIdle_1);
}

Sprite* GaruAnim::createGaruIdle_2Sprite()
{
    return Sprite::createWithSpriteFrameName(garuIdle_2);
}

Sprite* GaruAnim::createGaruIdle_3Sprite()
{
    return Sprite::createWithSpriteFrameName(garuIdle_3);
}

Sprite* GaruAnim::createGaruIdle_4Sprite()
{
    return Sprite::createWithSpriteFrameName(garuIdle_4);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> GaruAnim::getGARUATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(2);
    frames.pushBack(frameCache->getSpriteFrameByName(garuAtk_1));
    frames.pushBack(frameCache->getSpriteFrameByName(garuAtk_2));
    return frames;
}

Vector<SpriteFrame*> GaruAnim::getGARUIDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(garuIdle_1));
    frames.pushBack(frameCache->getSpriteFrameByName(garuIdle_2));
    frames.pushBack(frameCache->getSpriteFrameByName(garuIdle_3));
    frames.pushBack(frameCache->getSpriteFrameByName(garuIdle_4));
    return frames;
}


// ----------
// animations
// ----------

Animate *GaruAnim::createGARUATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getGARUATKAnimationFrames(), delay, loops));
}
Animate *GaruAnim::createGARUIDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getGARUIDLEAnimationFrames(), delay, loops));
}

}; // namespace

