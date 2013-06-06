//
//  GameOverLayer.h
//  Cocos2DSimpleGame
//
//  Created by Jayesh Sojitra on 6/5/13.
//  Copyright 2013 MySolutions. All rights reserved.
//

#import "cocos2d.h"


@interface GameOverLayer : CCLayerColor

+(CCScene *) sceneWithWon:(BOOL)won;
- (id)initWithWon:(BOOL)won;


@end
