// ---------------------------------------
// Sprite definitions for garuAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:a7afd9d65c9cff230dfbecbd56762c55:e1c81103a6bb69412bcbabdce3531f07:8adf6020e11e0a07d2f8d0999550e0eb$
// ---------------------------------------

#ifndef __GARUANIM_H__
#define __GARUANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class GaruAnim
{
public:
    /**
     * Add sprite frames contained in theGaruAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theGaruAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string garuAtk_1;
    static const std::string garuAtk_2;
    static const std::string garuIdle_1;
    static const std::string garuIdle_2;
    static const std::string garuIdle_3;
    static const std::string garuIdle_4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createGaruAtk_1Sprite();
    static cocos2d::Sprite *createGaruAtk_2Sprite();
    static cocos2d::Sprite *createGaruIdle_1Sprite();
    static cocos2d::Sprite *createGaruIdle_2Sprite();
    static cocos2d::Sprite *createGaruIdle_3Sprite();
    static cocos2d::Sprite *createGaruIdle_4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getGARUATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getGARUIDLEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createGARUATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createGARUIDLEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __GARUANIM_H__
