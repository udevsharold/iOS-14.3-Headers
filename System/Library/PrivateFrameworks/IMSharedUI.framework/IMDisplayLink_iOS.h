/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMDisplayLink.h>

@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)schedule;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(BOOL)isValid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)invalidate;
@end
