/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>

@protocol SBHomeGestureInteractionDelegate;
@class SBHomeGesturePanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, SBSystemGestureManager, NSSet, UIGestureRecognizer, NSString;

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate> {

	BOOL _enabled;
	long long _recognizedGestureType;
	SBHomeGesturePanGestureRecognizer* _screenEdgePanGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPanGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchGestureRecognizer;
	id<SBHomeGestureInteractionDelegate> _delegate;
	SBSystemGestureManager* _gestureManager;

}

@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * screenEdgePanGestureRecognizer;              //@synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPanGestureRecognizer;                   //@synthesize indirectPanGestureRecognizer=_indirectPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchGestureRecognizer;                      //@synthesize scrunchGestureRecognizer=_scrunchGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGestureInteractionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long recognizedGestureType;                                                 //@synthesize recognizedGestureType=_recognizedGestureType - In the implementation block
@property (nonatomic,retain) SBSystemGestureManager * gestureManager;                                         //@synthesize gestureManager=_gestureManager - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
@property (nonatomic,readonly) UIGestureRecognizer * recognizedGestureRecognizer; 
@property (nonatomic,readonly) double indirectScreenEdgeGestureRecognitionDistance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)gestureRecognizers;
-(CGPoint)translationInView:(id)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(SBHomeGesturePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(CGPoint)velocityInView:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_configureGestureRecognizers;
-(SBSystemGestureManager *)gestureManager;
-(void)setGestureManager:(SBSystemGestureManager *)arg1 ;
-(void)setDelegate:(id<SBHomeGestureInteractionDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)invalidate;
-(id<SBHomeGestureInteractionDelegate>)delegate;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizerForType:(long long)arg1 ;
-(id)initWithSystemGestureManager:(id)arg1 delegate:(id)arg2 ;
-(void)_configureScreenEdgePanGestureRecognizer;
-(void)_configureIndirectPanGestureRecognizer;
-(void)_configureScrunchGestureRecognizer;
-(long long)typeOfGestureRecognizer:(id)arg1 ;
-(UIGestureRecognizer *)recognizedGestureRecognizer;
-(double)indirectScreenEdgeGestureRecognitionDistance;
-(BOOL)_isGestureRunning:(id)arg1 ;
-(long long)recognizedGestureType;
-(void)setRecognizedGestureType:(long long)arg1 ;
-(void)setScreenEdgePanGestureRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPanGestureRecognizer;
-(void)setIndirectPanGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)scrunchGestureRecognizer;
-(void)setScrunchGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
@end

