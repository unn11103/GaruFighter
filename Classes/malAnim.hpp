// ---------------------------------------
// Sprite definitions for malAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:0cc672386309963d70b2de0b0a933ff5:91971c0538b9f64850c0a592748beafe:b8a06975457d63373131c11ff49ce445$
// ---------------------------------------

#ifndef __MALANIM_H__
#define __MALANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class MalAnim
{
public:
    /**
     * Add sprite frames contained in theMalAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theMalAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string attackMalAtk_1;
    static const std::string attackMalAtk_10;
    static const std::string attackMalAtk_11;
    static const std::string attackMalAtk_12;
    static const std::string attackMalAtk_13;
    static const std::string attackMalAtk_14;
    static const std::string attackMalAtk_15;
    static const std::string attackMalAtk_16;
    static const std::string attackMalAtk_17;
    static const std::string attackMalAtk_2;
    static const std::string attackMalAtk_3;
    static const std::string attackMalAtk_4;
    static const std::string attackMalAtk_5;
    static const std::string attackMalAtk_6;
    static const std::string attackMalAtk_7;
    static const std::string attackMalAtk_8;
    static const std::string attackMalAtk_9;
    static const std::string idleMalIdle_1;
    static const std::string idleMalIdle_2;
    static const std::string idleMalIdle_3;
    static const std::string idleMalIdle_4;
    static const std::string magicMalMagic_1;
    static const std::string magicMalMagic_2;
    static const std::string magicMalMagic_3;
    static const std::string magicMalMagic_4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createAttackMalAtk_1Sprite();
    static cocos2d::Sprite *createAttackMalAtk_10Sprite();
    static cocos2d::Sprite *createAttackMalAtk_11Sprite();
    static cocos2d::Sprite *createAttackMalAtk_12Sprite();
    static cocos2d::Sprite *createAttackMalAtk_13Sprite();
    static cocos2d::Sprite *createAttackMalAtk_14Sprite();
    static cocos2d::Sprite *createAttackMalAtk_15Sprite();
    static cocos2d::Sprite *createAttackMalAtk_16Sprite();
    static cocos2d::Sprite *createAttackMalAtk_17Sprite();
    static cocos2d::Sprite *createAttackMalAtk_2Sprite();
    static cocos2d::Sprite *createAttackMalAtk_3Sprite();
    static cocos2d::Sprite *createAttackMalAtk_4Sprite();
    static cocos2d::Sprite *createAttackMalAtk_5Sprite();
    static cocos2d::Sprite *createAttackMalAtk_6Sprite();
    static cocos2d::Sprite *createAttackMalAtk_7Sprite();
    static cocos2d::Sprite *createAttackMalAtk_8Sprite();
    static cocos2d::Sprite *createAttackMalAtk_9Sprite();
    static cocos2d::Sprite *createIdleMalIdle_1Sprite();
    static cocos2d::Sprite *createIdleMalIdle_2Sprite();
    static cocos2d::Sprite *createIdleMalIdle_3Sprite();
    static cocos2d::Sprite *createIdleMalIdle_4Sprite();
    static cocos2d::Sprite *createMagicMalMagic_1Sprite();
    static cocos2d::Sprite *createMagicMalMagic_2Sprite();
    static cocos2d::Sprite *createMagicMalMagic_3Sprite();
    static cocos2d::Sprite *createMagicMalMagic_4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getATTACK_MALATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getIDLE_MALIDLEAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getMAGIC_MALMAGICAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createATTACK_MALATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createIDLE_MALIDLEAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createMAGIC_MALMAGICAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __MALANIM_H__
