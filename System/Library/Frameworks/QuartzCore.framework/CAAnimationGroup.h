/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray * animations; 
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(NSArray *)animations;
-(void)CA_prepareRenderValue;
-(void)setAnimations:(NSArray *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setDefaultDuration:(double)arg1 ;
@end

