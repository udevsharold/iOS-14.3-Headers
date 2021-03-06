/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol _SBAlertControllerDelegate, UIAlertControllerVisualStyleProviding;
@class SBAlertItem, NSString;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<_SBAlertControllerDelegate> _alertControllerDelegate;
	id<UIAlertControllerVisualStyleProviding> _styleProvider;

}

@property (assign,nonatomic,__weak) SBAlertItem * alertItem;                                             //@synthesize alertItem=_alertItem - In the implementation block
@property (assign,nonatomic,__weak) id<_SBAlertControllerDelegate> alertControllerDelegate;              //@synthesize alertControllerDelegate=_alertControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(SBAlertItem *)alertItem;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithStyleProvider:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setAlertControllerDelegate:(id<_SBAlertControllerDelegate>)arg1 ;
-(void)setHiddenOnClonedDisplay:(BOOL)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<_SBAlertControllerDelegate>)alertControllerDelegate;
-(id)_styleProvider;
-(BOOL)_canShowWhileLocked;
@end

