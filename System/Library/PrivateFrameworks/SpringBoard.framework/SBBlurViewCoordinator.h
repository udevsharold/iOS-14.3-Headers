/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface SBBlurViewCoordinator : NSObject {

	NSArray* _elementVCs;
	unsigned long long _state;
	NSMutableDictionary* _mapStateToBlocks;

}

@property (nonatomic,readonly) NSArray * viewControllers;                  //@synthesize elementVCs=_elementVCs - In the implementation block
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (nonatomic,readonly) unsigned long long state;                   //@synthesize state=_state - In the implementation block
-(NSArray *)viewControllers;
-(void)_setState:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)state;
-(id)description;
-(BOOL)isBlurred;
-(id)initWithElementViewControllers:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fireBlocksForState:(unsigned long long)arg1 ;
-(void)addNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
-(void)removeNotifyBlock:(/*^block*/id)arg1 forState:(unsigned long long)arg2 ;
@end
