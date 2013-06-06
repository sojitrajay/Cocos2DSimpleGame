//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by Jayesh Sojitra on 6/5/13.
//  Copyright MySolutions 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
    int _monstersDestroyed;
    CCSprite *_player;
    CCSprite *_nextProjectile;
    
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
