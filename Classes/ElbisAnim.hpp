// ---------------------------------------
// Sprite definitions for ElbisAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:51c3182175aff94b7455406c9ff1115d:d409f7326688abf05b940006c4a9b1d4:cead4946d31f7c82332781573fc96f25$
// ---------------------------------------

#ifndef __ELBISANIM_H__
#define __ELBISANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class ElbisAnim
{
public:
    /**
     * Add sprite frames contained in theElbisAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theElbisAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string atk_1;
    static const std::string atk_10;
    static const std::string atk_11;
    static const std::string atk_12;
    static const std::string atk_13;
    static const std::string atk_14;
    static const std::string atk_2;
    static const std::string atk_3;
    static const std::string atk_4;
    static const std::string atk_5;
    static const std::string atk_6;
    static const std::string atk_7;
    static const std::string atk_8;
    static const std::string atk_9;
    static const std::string idle_1;
    static const std::string idle_2;
    static const std::string idle_3;
    static const std::string idle_4;
    static const std::string magic_1;
    static const std::string magic_2;
    static const std::string magic_3;
    static const std::string magic_4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createAtk_1Sprite();
    static cocos2d::Sprite *createAtk_10Sprite();
    static cocos2d::Sprite *createAtk_11Sprite();
    static cocos2d::Sprite *createAtk_12Sprite();
    static cocos2d::Sprite *createAtk_13Sprite();
    static cocos2d::Sprite *createAtk_14Sprite();
    static cocos2d::Sprite *createAtk_2Sprite();
    static cocos2d::Sprite *createAtk_3Sprite();
    static cocos2d::Sprite *createAtk_4Sprite();
    static cocos2d::Sprite *createAtk_5Sprite();
    static cocos2d::Sprite *createAtk_6Sprite();
    static cocos2d::Sprite *createAtk_7Sprite();
    static cocos2d::Sprite *createAtk_8Sprite();
    static cocos2d::Sprite *createAtk_9Sprite();
    static cocos2d::Sprite *createIdle_1Sprite();
    static cocos2d::Sprite *createIdle_2Sprite();
    static cocos2d::Sprite *createIdle_3Sprite();
    static cocos2d::Sprite *createIdle_4Sprite();
    static cocos2d::Sprite *createMagic_1Sprite();
    static cocos2d::Sprite *createMagic_2Sprite();
    static cocos2d::Sprite *createMagic_3Sprite();
    static cocos2d::Sprite *createMagic_4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getIDLEAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getMAGICAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createIDLEAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createMAGICAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __ELBISANIM_H__
