/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKLabelNode.h>

@protocol SKButtonNodeDelegate;
@class NSObject, SKAction;

@interface SKButtonNode : SKLabelNode {

	NSObject*<SKButtonNodeDelegate> _delegate;
	SKAction* _downAction;
	SKAction* _upAction;
	/*^block*/id _downBlock;
	/*^block*/id _upBlock;
	/*^block*/id _upInsideBlock;
	int _touches;

}

@property (assign,nonatomic,__weak) NSObject*<SKButtonNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKAction * downAction;                                        //@synthesize downAction=_downAction - In the implementation block
@property (nonatomic,retain) SKAction * upAction;                                          //@synthesize upAction=_upAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)buttonWithFontNamed:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKAction *)upAction;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(NSObject*<SKButtonNodeDelegate>)arg1 ;
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(NSObject*<SKButtonNodeDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDownAction:(SKAction *)arg1 ;
-(void)setUpAction:(SKAction *)arg1 ;
-(void)touchBegan:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)touchEnded:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)touchMoved:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)onTouchUp:(/*^block*/id)arg1 ;
-(void)onTouchDownInside:(/*^block*/id)arg1 ;
-(SKAction *)downAction;
@end
