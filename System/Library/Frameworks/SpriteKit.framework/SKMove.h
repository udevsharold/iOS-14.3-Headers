/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKMove : SKAction {

	SKCMove* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)moveTo:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveBy:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveToX:(double)arg1 duration:(double)arg2 ;
+(id)moveToY:(double)arg1 duration:(double)arg2 ;
+(id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveByX:(double)arg1 duration:(double)arg2 ;
+(id)moveByY:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

