/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString;

@interface CAMatchPropertyAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (assign) unsigned long long sourceLayerRenderId; 
@property (assign) unsigned sourceContextId; 
@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(NSString *)keyPath;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(unsigned)sourceContextId;
-(unsigned long long)sourceLayerRenderId;
-(void)setSourceContextId:(unsigned)arg1 ;
-(CALayer *)sourceLayer;
-(BOOL)isAdditive;
-(void)setSourceLayerRenderId:(unsigned long long)arg1 ;
@end
