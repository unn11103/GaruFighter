// ---------------------------------------
// Sprite definitions for AliceAnim
// Generated with TexturePacker 5.3.0
//
// https://www.codeandweb.com/texturepacker
// 
// $TexturePacker:SmartUpdate:cf41f47a9e6385822699f7835b980877:fbf97599602a584b26b04956de2329e1:d38a7864655b654af2e08fa2e33d4dd3$
// ---------------------------------------

#ifndef __ALICEANIM_H__
#define __ALICEANIM_H__

#include "cocos2d.h"

namespace TexturePacker
{

class AliceAnim
{
public:
    /**
     * Add sprite frames contained in theAliceAnim sheet to
     * the SpriteFrameCache.
     */
    static void addSpriteFramesToCache();

    /**
     * Remove sprite frames contained in theAliceAnim sheet from
     * the SpriteFrameCache.
     */
    static void removeSpriteFramesFromCache();

    // ---------------------
    // sprite name constants
    // ---------------------
    static const std::string aAtk_1;
    static const std::string aAtk_10;
    static const std::string aAtk_11;
    static const std::string aAtk_12;
    static const std::string aAtk_13;
    static const std::string aAtk_14;
    static const std::string aAtk_15;
    static const std::string aAtk_16;
    static const std::string aAtk_17;
    static const std::string aAtk_18;
    static const std::string aAtk_19;
    static const std::string aAtk_2;
    static const std::string aAtk_20;
    static const std::string aAtk_21;
    static const std::string aAtk_22;
    static const std::string aAtk_23;
    static const std::string aAtk_24;
    static const std::string aAtk_25;
    static const std::string aAtk_26;
    static const std::string aAtk_27;
    static const std::string aAtk_28;
    static const std::string aAtk_29;
    static const std::string aAtk_3;
    static const std::string aAtk_30;
    static const std::string aAtk_31;
    static const std::string aAtk_32;
    static const std::string aAtk_4;
    static const std::string aAtk_5;
    static const std::string aAtk_6;
    static const std::string aAtk_7;
    static const std::string aAtk_8;
    static const std::string aAtk_9;
    static const std::string aIdle1;
    static const std::string aIdle2;
    static const std::string aIdle4;
    static const std::string aIdle5;
    static const std::string amagic_1;
    static const std::string amagic_2;
    static const std::string amagic_3;
    static const std::string amagic_4;
    static const std::string deadAlice_1;
    static const std::string deadAlice_2;
    static const std::string deadAlice_3;
    static const std::string deadAlice_4;

    // --------------
    // Sprite objects
    // --------------
    static cocos2d::Sprite *createAAtk_1Sprite();
    static cocos2d::Sprite *createAAtk_10Sprite();
    static cocos2d::Sprite *createAAtk_11Sprite();
    static cocos2d::Sprite *createAAtk_12Sprite();
    static cocos2d::Sprite *createAAtk_13Sprite();
    static cocos2d::Sprite *createAAtk_14Sprite();
    static cocos2d::Sprite *createAAtk_15Sprite();
    static cocos2d::Sprite *createAAtk_16Sprite();
    static cocos2d::Sprite *createAAtk_17Sprite();
    static cocos2d::Sprite *createAAtk_18Sprite();
    static cocos2d::Sprite *createAAtk_19Sprite();
    static cocos2d::Sprite *createAAtk_2Sprite();
    static cocos2d::Sprite *createAAtk_20Sprite();
    static cocos2d::Sprite *createAAtk_21Sprite();
    static cocos2d::Sprite *createAAtk_22Sprite();
    static cocos2d::Sprite *createAAtk_23Sprite();
    static cocos2d::Sprite *createAAtk_24Sprite();
    static cocos2d::Sprite *createAAtk_25Sprite();
    static cocos2d::Sprite *createAAtk_26Sprite();
    static cocos2d::Sprite *createAAtk_27Sprite();
    static cocos2d::Sprite *createAAtk_28Sprite();
    static cocos2d::Sprite *createAAtk_29Sprite();
    static cocos2d::Sprite *createAAtk_3Sprite();
    static cocos2d::Sprite *createAAtk_30Sprite();
    static cocos2d::Sprite *createAAtk_31Sprite();
    static cocos2d::Sprite *createAAtk_32Sprite();
    static cocos2d::Sprite *createAAtk_4Sprite();
    static cocos2d::Sprite *createAAtk_5Sprite();
    static cocos2d::Sprite *createAAtk_6Sprite();
    static cocos2d::Sprite *createAAtk_7Sprite();
    static cocos2d::Sprite *createAAtk_8Sprite();
    static cocos2d::Sprite *createAAtk_9Sprite();
    static cocos2d::Sprite *createAIdle1Sprite();
    static cocos2d::Sprite *createAIdle2Sprite();
    static cocos2d::Sprite *createAIdle4Sprite();
    static cocos2d::Sprite *createAIdle5Sprite();
    static cocos2d::Sprite *createAmagic_1Sprite();
    static cocos2d::Sprite *createAmagic_2Sprite();
    static cocos2d::Sprite *createAmagic_3Sprite();
    static cocos2d::Sprite *createAmagic_4Sprite();
    static cocos2d::Sprite *createDeadAlice_1Sprite();
    static cocos2d::Sprite *createDeadAlice_2Sprite();
    static cocos2d::Sprite *createDeadAlice_3Sprite();
    static cocos2d::Sprite *createDeadAlice_4Sprite();

    // ----------------
    // animation frames
    // ----------------
    static cocos2d::Vector<cocos2d::SpriteFrame*> getAATKAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getAIDLEAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getAMAGICAnimationFrames();
    static cocos2d::Vector<cocos2d::SpriteFrame*> getDEADALICEAnimationFrames();

    // ---------------
    // animate actions
    // ---------------
    static cocos2d::Animate *createAATKAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createAIDLEAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createAMAGICAnimateAction(float delay, unsigned int loops = 1);
    static cocos2d::Animate *createDEADALICEAnimateAction(float delay, unsigned int loops = 1);

}; // class

}; // namespace

#endif // __ALICEANIM_H__
