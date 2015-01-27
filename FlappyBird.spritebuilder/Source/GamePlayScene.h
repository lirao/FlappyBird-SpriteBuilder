//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here;
    Character*     character;       //Character as in game character, not char??
    CCPhysicsNode* physicsNode;     //standard physics node - parent node for all physics stuff.
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
