/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout {

	BOOL mIsUpdatingOpacity;
	double mDynamicOpacity;

}

@property (nonatomic,readonly) double opacity; 
-(double)opacity;
-(BOOL)canFlip;
-(BOOL)isInvisible;
-(CGRect)frameForCulling;
-(CGRect)alignmentFrameInRoot;
-(CGRect)aliasedAlignmentFrameForScale:(double)arg1 ;
-(CGRect)i_baseFrame;
-(id)styledInfo;
-(CGRect)reflectionBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowedNaturalBoundsWithoutOffset;
-(CGRect)reflectionFrame;
-(CGRect)reflectionFrameInRoot;
-(CGRect)reflectionFrameForSubRect:(CGRect)arg1 ;
-(void)dynamicOpacityChangeDidBegin;
-(void)dynamicOpacityUpdateToValue:(double)arg1 ;
-(void)dynamicOpacityChangeDidEnd;
@end
