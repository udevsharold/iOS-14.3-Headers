/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MotionGeneratorClip.h>

@class UIColor;

@interface SolidColorGeneratorClip : MotionGeneratorClip {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(void)setColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(id)generatorEffect;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
@end

