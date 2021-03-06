/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@optional
-(BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
-(void)_setNeedsNonDeferredFocusUpdate;
-(BOOL)_isEligibleForFocusInteraction;
-(id)_linearFocusMovementSequences;
-(BOOL)_reversesLinearFocusWrapping;
-(long long)_preferredFocusMovementStyle;
-(id)_focusGroupDescriptor;
-(void)setAreChildrenFocused:(BOOL)arg1;
-(BOOL)areChildrenFocused;

@end

