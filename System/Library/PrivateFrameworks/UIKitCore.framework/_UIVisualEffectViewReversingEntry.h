/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {

	_UIVisualEffectViewEntry* _sourceEntry;

}
-(void)removeEffectFromView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(id)description;
-(id)copyForTransitionOut;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(id)initWithViewEntry:(id)arg1 ;
@end
