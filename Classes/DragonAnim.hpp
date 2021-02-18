// ---------------------------------------
// Sprite definitions for DragonAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:1a2b556c55ea32b17ad0bc6d718ac2c6:96494b889c5b726afb486773b21411d1:6d987aff57cef51b72f070272e29c16a$
// ---------------------------------------

#ifndef __DRAGONANIM_H__
#define __DRAGONANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class DragonAnim
{
public:
    /**
     * Add sprite frames contained in theDragonAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theDragonAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string dragon_atk_1;
    static const std::string dragon_atk_2;
    static const std::string dragon_idle_1;
    static const std::string dragon_idle_2;
    static const std::string dragon_idle_3;
    static const std::string dragon_idle_4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createDragon_atk_1Sprite();
    static cocos2d::Sprite *createDragon_atk_2Sprite();
    static cocos2d::Sprite *createDragon_idle_1Sprite();
    static cocos2d::Sprite *createDragon_idle_2Sprite();
    static cocos2d::Sprite *createDragon_idle_3Sprite();
    static cocos2d::Sprite *createDragon_idle_4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getDRAGON_ATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getDRAGON_IDLEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createDRAGON_ATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createDRAGON_IDLEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __DRAGONANIM_H__
