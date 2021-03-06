/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCPhysicalInputProfile.h>

@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {

	NSArray* _keys;
	NSSet* _allCodes;
	BOOL _isActive;
	int _numberOfKeysPressed;
	/*^block*/id _keyChangedHandler;

}

@property (nonatomic,copy) id keyChangedHandler;                                       //@synthesize keyChangedHandler=_keyChangedHandler - In the implementation block
@property (getter=isAnyKeyPressed,nonatomic,readonly) BOOL anyKeyPressed; 
-(void)commonInit;
-(id)init;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)name;
-(id)handlerQueue;
-(id)productCategory;
-(void)appDidBecomeActive;
-(void)appWillResignActive;
-(BOOL)hasButton:(long long)arg1 ;
-(id)buttonForKeyCode:(long long)arg1 ;
-(id)setElementValuesFromKeyboardInput:(id)arg1 ;
-(BOOL)shouldFilterInternalEvent:(IOHIDEventRef)arg1 ;
-(void)setKeyValue:(long long)arg1 down:(BOOL)arg2 ;
-(BOOL)isAnyKeyPressed;
-(void)setStateFromKeyboardInput:(id)arg1 ;
-(id)keyChangedHandler;
-(void)setKeyChangedHandler:(id)arg1 ;
@end

