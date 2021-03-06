/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSArray;

@interface AXCyclingView : UIView {

	BOOL _isMakingNextViewVisible;
	BOOL _shouldSkipMakingNextViewVisible;
	unsigned long long _cycleIndex;

}

@property (assign,nonatomic) unsigned long long cycleIndex;                     //@synthesize cycleIndex=_cycleIndex - In the implementation block
@property (assign,nonatomic) BOOL isMakingNextViewVisible;                      //@synthesize isMakingNextViewVisible=_isMakingNextViewVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipMakingNextViewVisible;              //@synthesize shouldSkipMakingNextViewVisible=_shouldSkipMakingNextViewVisible - In the implementation block
@property (nonatomic,readonly) NSArray * viewsInCycle; 
-(NSArray *)viewsInCycle;
-(unsigned long long)cycleIndex;
-(void)didMoveToWindow;
-(void)_updateForCycleIndex;
-(void)_makeNextViewVisible;
-(void)setCycleIndex:(unsigned long long)arg1 ;
-(BOOL)isMakingNextViewVisible;
-(void)setShouldSkipMakingNextViewVisible:(BOOL)arg1 ;
-(void)setIsMakingNextViewVisible:(BOOL)arg1 ;
-(BOOL)shouldSkipMakingNextViewVisible;
-(void)endCycling;
-(void)beginCycling;
@end

