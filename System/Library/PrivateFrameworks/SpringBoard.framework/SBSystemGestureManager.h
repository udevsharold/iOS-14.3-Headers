/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSMutableSet, NSSet, UIGestureRecognizer, SBIndirectTouchLifecycleMonitor, NSString;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding> {

	FBSDisplayIdentity* _displayIdentity;
	NSMutableDictionary* _typeToGesture;
	NSMutableDictionary* _gestureToType;
	NSMutableDictionary* _typeToState;
	NSMutableSet* _recognizingTouchGestures;
	NSMutableSet* _touchGestures;
	NSMutableSet* _gesturesDisabledAssertions;
	NSSet* _gestureTypesAllowedWhileDisableAssertionsExist;
	NSSet* _gesturesPreventedByStylus;
	UIGestureRecognizer* _stylusPriorityRecognizer;
	BOOL _systemGesturesDisabledForAccessibility;
	SBIndirectTouchLifecycleMonitor* _indirectTouchLifecycleMonitor;

}

@property (getter=isAnyTouchGestureRunning,nonatomic,readonly) BOOL anyTouchGestureRunning; 
@property (assign,getter=areSystemGesturesDisabledForAccessibility,nonatomic) BOOL systemGesturesDisabledForAccessibility;              //@synthesize systemGesturesDisabledForAccessibility=_systemGesturesDisabledForAccessibility - In the implementation block
@property (nonatomic,retain) NSSet * gesturesPreventedByStylus;                                                                         //@synthesize gesturesPreventedByStylus=_gesturesPreventedByStylus - In the implementation block
@property (nonatomic,retain) SBIndirectTouchLifecycleMonitor * indirectTouchLifecycleMonitor;                                           //@synthesize indirectTouchLifecycleMonitor=_indirectTouchLifecycleMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainDisplayManager;
-(void)removeGestureRecognizer:(id)arg1 ;
-(BOOL)areSystemGesturesDisabledForAccessibility;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_disableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)setGesturesPreventedByStylus:(NSSet *)arg1 ;
-(id)init;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)_systemGestureChanged:(id)arg1 ;
-(void)setIndirectTouchLifecycleMonitor:(SBIndirectTouchLifecycleMonitor *)arg1 ;
-(BOOL)_isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg1 ;
-(void)dealloc;
-(void)ignoreScreenEdgeTouchWithIdentifier:(unsigned)arg1 ;
-(void)_enableSystemGesture:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)_initWithDisplayIdentity:(id)arg1 ;
-(id)succinctDescription;
-(void)addGestureRecognizer:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_isTouchGestureWithType:(unsigned long long)arg1 ;
-(id)windowForSystemGestures;
-(BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)arg1 ;
-(void)gestureRecognizerOfType:(unsigned long long)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isAnyTouchGestureRunning;
-(id)acquireSystemGestureDisableAssertionForReason:(id)arg1 exceptSystemGestureTypes:(id)arg2 ;
-(NSSet *)gesturesPreventedByStylus;
-(void)_evaluateEnablement;
-(NSString *)debugDescription;
-(SBIndirectTouchLifecycleMonitor *)indirectTouchLifecycleMonitor;
-(BOOL)isGestureWithTypeAllowed:(unsigned long long)arg1 ;
-(long long)_recognitionEventForTouchGestureType:(unsigned long long)arg1 ;
@end
