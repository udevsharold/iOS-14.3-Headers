/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIViewController, NSHashTable, SBHMultiplexingManager;

@interface SBHMultiplexingViewController : UIViewController {

	double _level;
	NSString* _identifier;
	UIViewController* _multiplexedViewController;
	NSHashTable* _observers;
	SBHMultiplexingManager* _multiplexingManager;

}

@property (nonatomic,retain) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) SBHMultiplexingManager * multiplexingManager;                //@synthesize multiplexingManager=_multiplexingManager - In the implementation block
@property (nonatomic,readonly) double level;                                              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIViewController * multiplexedViewController;              //@synthesize multiplexedViewController=_multiplexedViewController - In the implementation block
-(double)level;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)dealloc;
-(SBHMultiplexingManager *)multiplexingManager;
-(void)_setUpMultiplexedViewController;
-(void)addObserver:(id)arg1 ;
-(void)deactivate;
-(NSString *)identifier;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)initWithLevel:(double)arg1 identifier:(id)arg2 ;
-(void)setMultiplexingManager:(SBHMultiplexingManager *)arg1 ;
-(UIViewController *)multiplexedViewController;
-(void)activateWithViewController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
@end
