/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIBarButtonItem.h>

@class UIView, SUUIAppearance, UINavigationItem, NSString, SUTouchCaptureView;

@interface SUBarButtonItem : UIBarButtonItem {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	SUUIAppearance* _confirmationAppearance;
	UINavigationItem* _lastNavigationItem;
	NSString* _preConfirmationTitle;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;                                     //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
+(Class)classForNavigationButton;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIEdgeInsets)accessoryViewInsets;
-(void)dealloc;
-(BOOL)isLoading;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(id)_navigationButton;
-(BOOL)isShowingConfirmation;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)hideConfirmationWithAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(BOOL)arg3 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_setTitle:(id)arg1 isConfirmation:(BOOL)arg2 appearance:(id)arg3 animated:(BOOL)arg4 ;
-(void)_updateViewForAccessoryChange;
-(void)_addTouchCaptureViewForNavigationButton:(id)arg1 ;
@end
