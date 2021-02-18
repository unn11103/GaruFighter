// ---------------------------------------
// Sprite definitions for CatAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "CatAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void CatAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Hero/Cat/catAnim.plist");
};

void CatAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("Hero/Cat/catAnim.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string CatAnim::cat_atk1  = "cat_atk1.png";
const std::string CatAnim::cat_atk10 = "cat_atk10.png";
const std::string CatAnim::cat_atk2  = "cat_atk2.png";
const std::string CatAnim::cat_atk3  = "cat_atk3.png";
const std::string CatAnim::cat_atk4  = "cat_atk4.png";
const std::string CatAnim::cat_atk5  = "cat_atk5.png";
const std::string CatAnim::cat_atk6  = "cat_atk6.png";
const std::string CatAnim::cat_atk7  = "cat_atk7.png";
const std::string CatAnim::cat_atk8  = "cat_atk8.png";
const std::string CatAnim::cat_atk9  = "cat_atk9.png";
const std::string CatAnim::cat_idle1 = "cat_idle1.png";
const std::string CatAnim::cat_idle2 = "cat_idle2.png";
const std::string CatAnim::cat_idle3 = "cat_idle3.png";
const std::string CatAnim::cat_idle4 = "cat_idle4.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* CatAnim::createCat_atk1Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk1);
}

Sprite* CatAnim::createCat_atk10Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk10);
}

Sprite* CatAnim::createCat_atk2Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk2);
}

Sprite* CatAnim::createCat_atk3Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk3);
}

Sprite* CatAnim::createCat_atk4Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk4);
}

Sprite* CatAnim::createCat_atk5Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk5);
}

Sprite* CatAnim::createCat_atk6Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk6);
}

Sprite* CatAnim::createCat_atk7Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk7);
}

Sprite* CatAnim::createCat_atk8Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk8);
}

Sprite* CatAnim::createCat_atk9Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_atk9);
}

Sprite* CatAnim::createCat_idle1Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_idle1);
}

Sprite* CatAnim::createCat_idle2Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_idle2);
}

Sprite* CatAnim::createCat_idle3Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_idle3);
}

Sprite* CatAnim::createCat_idle4Sprite()
{
    return Sprite::createWithSpriteFrameName(cat_idle4);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> CatAnim::getCAT_ATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(10);
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk1));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk2));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk3));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk4));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk5));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk6));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk7));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk8));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk9));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_atk10));
    return frames;
}

Vector<SpriteFrame*> CatAnim::getCAT_IDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(cat_idle1));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_idle2));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_idle3));
    frames.pushBack(frameCache->getSpriteFrameByName(cat_idle4));
    return frames;
}


// ----------
// animations
// ----------

Animate *CatAnim::createCAT_ATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getCAT_ATKAnimationFrames(), delay, loops));
}
Animate *CatAnim::createCAT_IDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getCAT_IDLEAnimationFrames(), delay, loops));
}

}; // namespace

