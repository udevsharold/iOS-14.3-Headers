/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OBAnimationAppearanceChangeDelegate.h>

@class CAPackage, CAStateController, OBAnimationView, NSArray, OBAnimationState, NSString;

@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate> {

	BOOL _canceled;
	CAPackage* _package;
	CAStateController* _stateController;
	OBAnimationView* _animationView;
	NSArray* _animatedStates;
	unsigned long long _stateIndex;
	OBAnimationState* _firstState;

}

@property (nonatomic,retain) CAPackage * package;                              //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (nonatomic,retain) OBAnimationView * animationView;                  //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) NSArray * animatedStates;                         //@synthesize animatedStates=_animatedStates - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) unsigned long long stateIndex;                    //@synthesize stateIndex=_stateIndex - In the implementation block
@property (nonatomic,retain) OBAnimationState * firstState;                    //@synthesize firstState=_firstState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)packageForURL:(id)arg1 ;
-(void)stopAnimation;
-(void)startAnimation;
-(BOOL)canceled;
-(CAStateController *)stateController;
-(CAPackage *)package;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)setPackage:(CAPackage *)arg1 ;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 sizingTransformScale:(double)arg3 animatedStates:(id)arg4 startAtFirstState:(id)arg5 ;
-(void)_initializeStartingStateForStopAnimation:(BOOL)arg1 ;
-(void)_startAnimationForLayer:(id)arg1 ;
-(unsigned long long)stateIndex;
-(void)setStateIndex:(unsigned long long)arg1 ;
-(id)_caStateForAnimationState:(id)arg1 ;
-(void)_stepAnimationStatesForLayer:(id)arg1 ;
-(NSArray *)animatedStates;
-(void)updateAnimationForAppearanceChange;
-(OBAnimationView *)animationView;
-(void)setAnimationView:(OBAnimationView *)arg1 ;
-(OBAnimationState *)firstState;
-(id)initWithUrlToPackage:(id)arg1 animationView:(id)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4 ;
-(void)setAnimatedStates:(NSArray *)arg1 ;
-(void)setFirstState:(OBAnimationState *)arg1 ;
@end

