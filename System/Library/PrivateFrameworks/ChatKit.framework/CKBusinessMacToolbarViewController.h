/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, CKConversation, CKBusinessMacToolbarView, IMHandle;

@interface CKBusinessMacToolbarViewController : UIViewController {

	BOOL _showingInStandAloneWindow;
	UIView* _detailsPopoverPresentationSourceView;
	CKConversation* _conversation;
	CKBusinessMacToolbarView* _toolbarView;

}

@property (nonatomic,readonly) CKConversation * conversation;                            //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) IMHandle * handle; 
@property (nonatomic,readonly) BOOL showingInStandAloneWindow;                           //@synthesize showingInStandAloneWindow=_showingInStandAloneWindow - In the implementation block
@property (nonatomic,retain) CKBusinessMacToolbarView * toolbarView;                     //@synthesize toolbarView=_toolbarView - In the implementation block
@property (nonatomic,retain) UIView * detailsPopoverPresentationSourceView;              //@synthesize detailsPopoverPresentationSourceView=_detailsPopoverPresentationSourceView - In the implementation block
-(CGRect)_detailsPopoverFrame;
-(void)setDetailsPopoverPresentationSourceView:(UIView *)arg1 ;
-(UIView *)detailsPopoverPresentationSourceView;
-(CKConversation *)conversation;
-(void)dealloc;
-(IMHandle *)handle;
-(BOOL)showingInStandAloneWindow;
-(CKBusinessMacToolbarView *)toolbarView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setToolbarView:(CKBusinessMacToolbarView *)arg1 ;
-(void)_handleAddressBookPartialChange:(id)arg1 ;
-(void)_updateBannerImageData;
-(void)_updateFallbackTitle;
-(void)_updateBrandColors;
-(id)initWithConversation:(id)arg1 showingInStandAloneWindow:(BOOL)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end

