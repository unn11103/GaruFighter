// ---------------------------------------
// Sprite definitions for FiendAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:9cbcd389c22a9673c1e5648b3c774be9:68f5f869facf68794555e45c0ea8901d:565aa44caa08038c97f580fe7647b58e$
// ---------------------------------------

#ifndef __FIENDANIM_H__
#define __FIENDANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class FiendAnim
{
public:
    /**
     * Add sprite frames contained in theFiendAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theFiendAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string atk_1;
    static const std::string atk_2;
    static const std::string idle_1;
    static const std::string idle_2;
    static const std::string idle_3;
    static const std::string idle_4;
    static const std::string idle_5;
    static const std::string idle_6;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createAtk_1Sprite();
    static cocos2d::Sprite *createAtk_2Sprite();
    static cocos2d::Sprite *createIdle_1Sprite();
    static cocos2d::Sprite *createIdle_2Sprite();
    static cocos2d::Sprite *createIdle_3Sprite();
    static cocos2d::Sprite *createIdle_4Sprite();
    static cocos2d::Sprite *createIdle_5Sprite();
    static cocos2d::Sprite *createIdle_6Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getIDLEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createIDLEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __FIENDANIM_H__
