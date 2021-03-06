/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFieldEditorHost.h>

@class _UIFieldEditorSystemInputHostView, UIVisualEffectView, UISystemInputViewController;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {

	_UIFieldEditorSystemInputHostView* _containerView;
	UIVisualEffectView* _backgroundEffectView;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
-(void)layoutIfNeeded;
-(BOOL)_isTV;
-(void)dealloc;
-(id)description;
-(void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)arg1 ;
-(UISystemInputViewController *)_systemInputViewController;
-(void)addFieldEditor:(id)arg1 ;
-(id)_viewForHostingFieldEditor;
-(void)removeFieldEditor;
-(void)addPlaceholderLabel:(id)arg1 ;
@end

