/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>
#import <libobjc.A.dylib/CKNavigationBarCanvasViewDelegate.h>

@protocol CKNavbarCanvasViewControllerDelegate;
@class UIBarButtonItem, CKDetailsContactsManager, UIButton, CKNavigationBarCanvasView, NSString, CKConversation, CKAvatarPickerViewController, CKLabel, CKCanvasBackButtonView, UINavigationController, CNContactStore;

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate> {

	BOOL _canShowBackButtonView;
	BOOL _shouldShowDoneButton;
	BOOL _isInEditingMode;
	BOOL _editing;
	UIBarButtonItem* _detailsBarButton;
	CKDetailsContactsManager* _contactsManager;
	id<CKNavbarCanvasViewControllerDelegate> _delegate;
	UIButton* _callButton;
	CKNavigationBarCanvasView* _canvasView;
	NSString* _navbarTitle;
	CKConversation* _conversation;
	CKAvatarPickerViewController* _avatarPickerViewController;
	CKLabel* _defaultLabel;
	CKCanvasBackButtonView* _backButtonView;
	UIButton* _detailsButton;
	UIButton* _clearAllButtonView;
	UIButton* _editCancelButtonView;
	UIButton* _doneButton;
	UINavigationController* _proxyNavigationController;
	long long _indicatorType;
	CNContactStore* _suggestionsEnabledContactStore;

}

@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKAvatarPickerViewController * avatarPickerViewController;              //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;                                 //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) CKLabel * defaultLabel;                                                 //@synthesize defaultLabel=_defaultLabel - In the implementation block
@property (nonatomic,retain) CKCanvasBackButtonView * backButtonView;                                //@synthesize backButtonView=_backButtonView - In the implementation block
@property (nonatomic,retain) UIButton * detailsButton;                                               //@synthesize detailsButton=_detailsButton - In the implementation block
@property (nonatomic,retain) UIButton * callButton;                                                  //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) UIButton * clearAllButtonView;                                          //@synthesize clearAllButtonView=_clearAllButtonView - In the implementation block
@property (nonatomic,retain) UIButton * editCancelButtonView;                                        //@synthesize editCancelButtonView=_editCancelButtonView - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * proxyNavigationController;              //@synthesize proxyNavigationController=_proxyNavigationController - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                           //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSString * navbarTitle;                                                 //@synthesize navbarTitle=_navbarTitle - In the implementation block
@property (assign,nonatomic) long long indicatorType;                                                //@synthesize indicatorType=_indicatorType - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                        //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * contactsManager;                             //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic,__weak) id<CKNavbarCanvasViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * detailsBarButton;                                     //@synthesize detailsBarButton=_detailsBarButton - In the implementation block
@property (assign,nonatomic) BOOL canShowBackButtonView;                                             //@synthesize canShowBackButtonView=_canShowBackButtonView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDoneButton;                                              //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (assign,nonatomic) BOOL isInEditingMode;                                                   //@synthesize isInEditingMode=_isInEditingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)doneButton;
-(BOOL)editing;
-(id)navigationItem;
-(void)setDoneButton:(UIButton *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setContactsManager:(CKDetailsContactsManager *)arg1 ;
-(CKDetailsContactsManager *)contactsManager;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CKConversation *)conversation;
-(void)dealloc;
-(void)setConversation:(CKConversation *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(UIButton *)detailsButton;
-(void)viewDidLayoutSubviews;
-(void)setCanShowBackButtonView:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureForEditing:(BOOL)arg1 ;
-(id)initWithConversation:(id)arg1 navigationController:(id)arg2 ;
-(UIButton *)editCancelButtonView;
-(UIButton *)clearAllButtonView;
-(void)startAudioCommunicationUsingPreferredRouteIfAvailable:(BOOL)arg1 ;
-(UIButton *)callButton;
-(void)collapse;
-(void)showContactCardForEntity:(id)arg1 address:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setDelegate:(id<CKNavbarCanvasViewControllerDelegate>)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(NSString *)navbarTitle;
-(void)registerNotifications;
-(void)loadView;
-(void)setProxyNavigationController:(UINavigationController *)arg1 ;
-(id)navBarTitleFromConversation:(id)arg1 ;
-(void)setNavbarTitle:(NSString *)arg1 ;
-(void)_handleTranscriptScroll:(id)arg1 ;
-(void)_handleConversationRecipientsDidChange:(id)arg1 ;
-(void)_handleAllowedByScreenTimeChatChanged:(id)arg1 ;
-(id)_windowTraitCollection;
-(double)_preferredHeightForTraitCollection:(id)arg1 ;
-(void)_initializeForTraitCollection:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)_userDidTapNavigationBar:(id)arg1 ;
-(void)toggleExpansionState;
-(CKLabel *)defaultLabel;
-(void)_infoButtonTapped:(id)arg1 ;
-(void)_updateFTControls;
-(long long)_unreadCount;
-(void)refreshAudioButtonTargetAction;
-(void)_facetimeVideoButtonTapped:(id)arg1 ;
-(void)_notifyDelegateThatViewControllerWantsResize;
-(void)handleCloseNavBarAnimationCompleteNotification:(id)arg1 ;
-(void)setCallButton:(UIButton *)arg1 ;
-(BOOL)isInEditingMode;
-(void)_updateUnreadCountForBackbuttonView:(long long)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)multiwayStateChanged:(id)arg1 ;
-(void)_updateMultiwayButtonStateWithConversation:(id)arg1 ;
-(void)setIndicatorType:(long long)arg1 ;
-(void)_configureForEditMode;
-(void)_configureForDefaultMode;
-(id)_titleItemViewForTraitCollection:(id)arg1 ;
-(long long)indicatorType;
-(id)_leftItemViewForTraitCollection:(id)arg1 ;
-(id)_rightItemViewForTraitCollection:(id)arg1 ;
-(id)contextMenuForUnknownRecipient:(id)arg1 ;
-(BOOL)canShowBackButtonView;
-(void)setDefaultLabel:(CKLabel *)arg1 ;
-(UINavigationController *)proxyNavigationController;
-(void)dismissModal;
-(CNContactStore *)suggestionsEnabledContactStore;
-(void)setUnreadCountTitleColor;
-(UIBarButtonItem *)detailsBarButton;
-(void)_facetimeAudioButtonTapped:(id)arg1 ;
-(BOOL)shouldShowAvatarView;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1 ;
-(id)recipientContextMenu;
-(id)_secondaryRightItemViewForTraitCollection:(id)arg1 ;
-(void)updateDefaultLabelIfNecessary;
-(void)setDetailsBarButton:(UIBarButtonItem *)arg1 ;
-(void)showMapkitBusinessData;
-(void)setBackButtonView:(CKCanvasBackButtonView *)arg1 ;
-(void)setDetailsButton:(UIButton *)arg1 ;
-(void)setClearAllButtonView:(UIButton *)arg1 ;
-(void)setEditCancelButtonView:(UIButton *)arg1 ;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)setShouldShowDoneButton:(BOOL)arg1 ;
-(void)_handleAddressBookChange:(id)arg1 ;
-(CKCanvasBackButtonView *)backButtonView;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(id<CKNavbarCanvasViewControllerDelegate>)delegate;
-(BOOL)shouldShowDoneButton;
-(void)viewDidLoad;
-(void)_contactPhotosEnabledChangedNotification:(id)arg1 ;
-(BOOL)_canShowAvatarView;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(void)setAvatarPickerViewController:(CKAvatarPickerViewController *)arg1 ;
@end

