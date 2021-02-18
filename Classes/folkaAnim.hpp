// ---------------------------------------
// Sprite definitions for folkaAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:4804a28daf8add5eaa22e53191ce899c:caa1a946a9a2dc917ea9d23e05972c42:060d6da91efdde2cfbf7e9509b923602$
// ---------------------------------------

#ifndef __FOLKAANIM_H__
#define __FOLKAANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class FolkaAnim
{
public:
    /**
     * Add sprite frames contained in theFolkaAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theFolkaAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string folkaAtk_1;
    static const std::string folkaAtk_10;
    static const std::string folkaAtk_11;
    static const std::string folkaAtk_12;
    static const std::string folkaAtk_13;
    static const std::string folkaAtk_14;
    static const std::string folkaAtk_15;
    static const std::string folkaAtk_16;
    static const std::string folkaAtk_17;
    static const std::string folkaAtk_18;
    static const std::string folkaAtk_19;
    static const std::string folkaAtk_2;
    static const std::string folkaAtk_20;
    static const std::string folkaAtk_21;
    static const std::string folkaAtk_22;
    static const std::string folkaAtk_23;
    static const std::string folkaAtk_24;
    static const std::string folkaAtk_25;
    static const std::string folkaAtk_3;
    static const std::string folkaAtk_4;
    static const std::string folkaAtk_5;
    static const std::string folkaAtk_6;
    static const std::string folkaAtk_7;
    static const std::string folkaAtk_8;
    static const std::string folkaAtk_9;
    static const std::string folka_magic_1;
    static const std::string folka_magic_2;
    static const std::string folka_magic_3;
    static const std::string folka_magic_4;
    static const std::string idle1;
    static const std::string idle2;
    static const std::string idle3;
    static const std::string idle4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createFolkaAtk_1Sprite();
    static cocos2d::Sprite *createFolkaAtk_10Sprite();
    static cocos2d::Sprite *createFolkaAtk_11Sprite();
    static cocos2d::Sprite *createFolkaAtk_12Sprite();
    static cocos2d::Sprite *createFolkaAtk_13Sprite();
    static cocos2d::Sprite *createFolkaAtk_14Sprite();
    static cocos2d::Sprite *createFolkaAtk_15Sprite();
    static cocos2d::Sprite *createFolkaAtk_16Sprite();
    static cocos2d::Sprite *createFolkaAtk_17Sprite();
    static cocos2d::Sprite *createFolkaAtk_18Sprite();
    static cocos2d::Sprite *createFolkaAtk_19Sprite();
    static cocos2d::Sprite *createFolkaAtk_2Sprite();
    static cocos2d::Sprite *createFolkaAtk_20Sprite();
    static cocos2d::Sprite *createFolkaAtk_21Sprite();
    static cocos2d::Sprite *createFolkaAtk_22Sprite();
    static cocos2d::Sprite *createFolkaAtk_23Sprite();
    static cocos2d::Sprite *createFolkaAtk_24Sprite();
    static cocos2d::Sprite *createFolkaAtk_25Sprite();
    static cocos2d::Sprite *createFolkaAtk_3Sprite();
    static cocos2d::Sprite *createFolkaAtk_4Sprite();
    static cocos2d::Sprite *createFolkaAtk_5Sprite();
    static cocos2d::Sprite *createFolkaAtk_6Sprite();
    static cocos2d::Sprite *createFolkaAtk_7Sprite();
    static cocos2d::Sprite *createFolkaAtk_8Sprite();
    static cocos2d::Sprite *createFolkaAtk_9Sprite();
    static cocos2d::Sprite *createFolka_magic_1Sprite();
    static cocos2d::Sprite *createFolka_magic_2Sprite();
    static cocos2d::Sprite *createFolka_magic_3Sprite();
    static cocos2d::Sprite *createFolka_magic_4Sprite();
    static cocos2d::Sprite *createIdle1Sprite();
    static cocos2d::Sprite *createIdle2Sprite();
    static cocos2d::Sprite *createIdle3Sprite();
    static cocos2d::Sprite *createIdle4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getFOLKAATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getFOLKA_MAGICAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getIDLEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createFOLKAATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createFOLKA_MAGICAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createIDLEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __FOLKAANIM_H__
