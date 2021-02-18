// ---------------------------------------
// Sprite definitions for malAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "malAnim.hpp"

USING_NS_CC;

namespace TexturePacker
{

void MalAnim::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Hero/Malphaise/malAnim.plist");
};

void MalAnim::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("malAnim.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string MalAnim::attackMalAtk_1  = "attack/malAtk_1.png";
const std::string MalAnim::attackMalAtk_10 = "attack/malAtk_10.png";
const std::string MalAnim::attackMalAtk_11 = "attack/malAtk_11.png";
const std::string MalAnim::attackMalAtk_12 = "attack/malAtk_12.png";
const std::string MalAnim::attackMalAtk_13 = "attack/malAtk_13.png";
const std::string MalAnim::attackMalAtk_14 = "attack/malAtk_14.png";
const std::string MalAnim::attackMalAtk_15 = "attack/malAtk_15.png";
const std::string MalAnim::attackMalAtk_16 = "attack/malAtk_16.png";
const std::string MalAnim::attackMalAtk_17 = "attack/malAtk_17.png";
const std::string MalAnim::attackMalAtk_2  = "attack/malAtk_2.png";
const std::string MalAnim::attackMalAtk_3  = "attack/malAtk_3.png";
const std::string MalAnim::attackMalAtk_4  = "attack/malAtk_4.png";
const std::string MalAnim::attackMalAtk_5  = "attack/malAtk_5.png";
const std::string MalAnim::attackMalAtk_6  = "attack/malAtk_6.png";
const std::string MalAnim::attackMalAtk_7  = "attack/malAtk_7.png";
const std::string MalAnim::attackMalAtk_8  = "attack/malAtk_8.png";
const std::string MalAnim::attackMalAtk_9  = "attack/malAtk_9.png";
const std::string MalAnim::idleMalIdle_1   = "idle/malIdle_1.png";
const std::string MalAnim::idleMalIdle_2   = "idle/malIdle_2.png";
const std::string MalAnim::idleMalIdle_3   = "idle/malIdle_3.png";
const std::string MalAnim::idleMalIdle_4   = "idle/malIdle_4.png";
const std::string MalAnim::magicMalMagic_1 = "magic/malMagic_1.png";
const std::string MalAnim::magicMalMagic_2 = "magic/malMagic_2.png";
const std::string MalAnim::magicMalMagic_3 = "magic/malMagic_3.png";
const std::string MalAnim::magicMalMagic_4 = "magic/malMagic_4.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* MalAnim::createAttackMalAtk_1Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_1);
}

Sprite* MalAnim::createAttackMalAtk_10Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_10);
}

Sprite* MalAnim::createAttackMalAtk_11Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_11);
}

Sprite* MalAnim::createAttackMalAtk_12Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_12);
}

Sprite* MalAnim::createAttackMalAtk_13Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_13);
}

Sprite* MalAnim::createAttackMalAtk_14Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_14);
}

Sprite* MalAnim::createAttackMalAtk_15Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_15);
}

Sprite* MalAnim::createAttackMalAtk_16Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_16);
}

Sprite* MalAnim::createAttackMalAtk_17Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_17);
}

Sprite* MalAnim::createAttackMalAtk_2Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_2);
}

Sprite* MalAnim::createAttackMalAtk_3Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_3);
}

Sprite* MalAnim::createAttackMalAtk_4Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_4);
}

Sprite* MalAnim::createAttackMalAtk_5Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_5);
}

Sprite* MalAnim::createAttackMalAtk_6Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_6);
}

Sprite* MalAnim::createAttackMalAtk_7Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_7);
}

Sprite* MalAnim::createAttackMalAtk_8Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_8);
}

Sprite* MalAnim::createAttackMalAtk_9Sprite()
{
    return Sprite::createWithSpriteFrameName(attackMalAtk_9);
}

Sprite* MalAnim::createIdleMalIdle_1Sprite()
{
    return Sprite::createWithSpriteFrameName(idleMalIdle_1);
}

Sprite* MalAnim::createIdleMalIdle_2Sprite()
{
    return Sprite::createWithSpriteFrameName(idleMalIdle_2);
}

Sprite* MalAnim::createIdleMalIdle_3Sprite()
{
    return Sprite::createWithSpriteFrameName(idleMalIdle_3);
}

Sprite* MalAnim::createIdleMalIdle_4Sprite()
{
    return Sprite::createWithSpriteFrameName(idleMalIdle_4);
}

Sprite* MalAnim::createMagicMalMagic_1Sprite()
{
    return Sprite::createWithSpriteFrameName(magicMalMagic_1);
}

Sprite* MalAnim::createMagicMalMagic_2Sprite()
{
    return Sprite::createWithSpriteFrameName(magicMalMagic_2);
}

Sprite* MalAnim::createMagicMalMagic_3Sprite()
{
    return Sprite::createWithSpriteFrameName(magicMalMagic_3);
}

Sprite* MalAnim::createMagicMalMagic_4Sprite()
{
    return Sprite::createWithSpriteFrameName(magicMalMagic_4);
}


// ------------------------------------------------
// convenience functions returning animation frames
// ------------------------------------------------

Vector<SpriteFrame*> MalAnim::getATTACK_MALATKAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(17);
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_1));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_2));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_3));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_4));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_5));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_6));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_7));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_8));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_9));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_10));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_11));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_12));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_13));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_14));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_15));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_16));
    frames.pushBack(frameCache->getSpriteFrameByName(attackMalAtk_17));
    return frames;
}

Vector<SpriteFrame*> MalAnim::getIDLE_MALIDLEAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(idleMalIdle_1));
    frames.pushBack(frameCache->getSpriteFrameByName(idleMalIdle_2));
    frames.pushBack(frameCache->getSpriteFrameByName(idleMalIdle_3));
    frames.pushBack(frameCache->getSpriteFrameByName(idleMalIdle_4));
    return frames;
}

Vector<SpriteFrame*> MalAnim::getMAGIC_MALMAGICAnimationFrames()
{
    SpriteFrameCache *frameCache = SpriteFrameCache::getInstance();
    Vector<SpriteFrame*> frames;
    frames.reserve(4);
    frames.pushBack(frameCache->getSpriteFrameByName(magicMalMagic_1));
    frames.pushBack(frameCache->getSpriteFrameByName(magicMalMagic_2));
    frames.pushBack(frameCache->getSpriteFrameByName(magicMalMagic_3));
    frames.pushBack(frameCache->getSpriteFrameByName(magicMalMagic_4));
    return frames;
}


// ----------
// animations
// ----------

Animate *MalAnim::createATTACK_MALATKAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getATTACK_MALATKAnimationFrames(), delay, loops));
}
Animate *MalAnim::createIDLE_MALIDLEAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getIDLE_MALIDLEAnimationFrames(), delay, loops));
}
Animate *MalAnim::createMAGIC_MALMAGICAnimateAction(float delay, unsigned int loops)
{
    return Animate::create(Animation::createWithSpriteFrames(getMAGIC_MALMAGICAnimationFrames(), delay, loops));
}

}; // namespace

