/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UIActionSheetCompactPresentationControllerDelegate.h>

@protocol UIActionSheetPresentationControllerDelegate;
@class NSString, _UIActionSheetCompactPresentationController;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate> {

	BOOL _dismissActionUsesShorterHeightWhenCompactVertically;
	BOOL __shouldUseCompactPresentationControllerWhenPresentedInSheet;
	BOOL _avoidsKeyboardDisabled;
	NSString* _dismissActionTitle;
	id<UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
	_UIActionSheetCompactPresentationController* _compactPresentationController;

}

@property (nonatomic,retain) _UIActionSheetCompactPresentationController * compactPresentationController;                                                                          //@synthesize compactPresentationController=_compactPresentationController - In the implementation block
@property (assign,nonatomic) BOOL avoidsKeyboardDisabled;                                                                                                                          //@synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle;                                                                                                                          //@synthesize dismissActionTitle=_dismissActionTitle - In the implementation block
@property (assign,nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;                                                                                             //@synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically - In the implementation block
@property (assign,setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:,nonatomic) BOOL _shouldUseCompactPresentationControllerWhenPresentedInSheet;              //@synthesize _shouldUseCompactPresentationControllerWhenPresentedInSheet=__shouldUseCompactPresentationControllerWhenPresentedInSheet - In the implementation block
@property (assign,nonatomic,__weak) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate;                                                                           //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1 ;
-(void)_setShouldUseCompactPresentationControllerWhenPresentedInSheet:(BOOL)arg1 ;
-(BOOL)_shouldUseCompactPresentationControllerWhenPresentedInSheet;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(BOOL)arg1 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1 ;
-(BOOL)dismissActionUsesShorterHeightWhenCompactVertically;
-(BOOL)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(id<UIActionSheetPresentationControllerDelegate>)actionSheetDelegate;
-(NSString *)dismissActionTitle;
-(BOOL)avoidsKeyboardDisabled;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(void)beginPseudoAlertPresentationMode;
-(void)endPseudoAlertPresentationMode;
-(void)setAvoidsKeyboardDisabled:(BOOL)arg1 ;
-(void)setActionSheetDelegate:(id<UIActionSheetPresentationControllerDelegate>)arg1 ;
-(_UIActionSheetCompactPresentationController *)compactPresentationController;
-(id)_visualStyleForTraitCollection:(id)arg1 ;
-(void)setCompactPresentationController:(_UIActionSheetCompactPresentationController *)arg1 ;
-(long long)_presentationContextForViewController:(id)arg1 ;
-(id)_compactPresentationController;
@end
