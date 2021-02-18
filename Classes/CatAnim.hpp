// ---------------------------------------
// Sprite definitions for CatAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:c2d6f86ef44ae068bafadce73a2a1c98:1e2f265987ff1996cde29cf03ca6c754:afd8ebc76294dd23e40d3e51e65d8fa5$
// ---------------------------------------

#ifndef __CATANIM_H__
#define __CATANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class CatAnim
{
public:
    /**
     * Add sprite frames contained in theCatAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theCatAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string cat_atk1;
    static const std::string cat_atk10;
    static const std::string cat_atk2;
    static const std::string cat_atk3;
    static const std::string cat_atk4;
    static const std::string cat_atk5;
    static const std::string cat_atk6;
    static const std::string cat_atk7;
    static const std::string cat_atk8;
    static const std::string cat_atk9;
    static const std::string cat_idle1;
    static const std::string cat_idle2;
    static const std::string cat_idle3;
    static const std::string cat_idle4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createCat_atk1Sprite();
    static cocos2d::Sprite *createCat_atk10Sprite();
    static cocos2d::Sprite *createCat_atk2Sprite();
    static cocos2d::Sprite *createCat_atk3Sprite();
    static cocos2d::Sprite *createCat_atk4Sprite();
    static cocos2d::Sprite *createCat_atk5Sprite();
    static cocos2d::Sprite *createCat_atk6Sprite();
    static cocos2d::Sprite *createCat_atk7Sprite();
    static cocos2d::Sprite *createCat_atk8Sprite();
    static cocos2d::Sprite *createCat_atk9Sprite();
    static cocos2d::Sprite *createCat_idle1Sprite();
    static cocos2d::Sprite *createCat_idle2Sprite();
    static cocos2d::Sprite *createCat_idle3Sprite();
    static cocos2d::Sprite *createCat_idle4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getCAT_ATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getCAT_IDLEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createCAT_ATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createCAT_IDLEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __CATANIM_H__
