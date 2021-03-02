/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTAvatarPickerDelegate.h>
#import <libobjc.A.dylib/CFXEffectPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/IMADockViewControllerDelegate.h>

@protocol CFXEffectBrowserContentPresenterDelegate, CFXEffectBrowserViewControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;
@class NSString, CFXEffectPickerViewController, UIView, IMADockViewController, NSObject, UIViewController, NSLayoutConstraint, JFXOrientationMonitor;

@interface CFXEffectBrowserViewController : UIViewController <AVTAvatarPickerDelegate, CFXEffectPickerViewControllerDelegate, IMADockViewControllerDelegate> {

	id<CFXEffectBrowserContentPresenterDelegate> _contentPresenterDelegate;
	NSString* _selectedAppIdentifier;
	id<CFXEffectBrowserViewControllerDelegate> _delegate;
	CFXEffectPickerViewController* _effectPickerViewController;
	UIView* _messagesAppsDockContainerView;
	IMADockViewController* _messagesAppsDockViewController;
	NSObject*<OS_dispatch_semaphore> _animatedPreviewWritingSemaphore;
	NSObject*<OS_dispatch_queue> _animatedPreviewWritingQueue;
	NSObject*<OS_dispatch_group> _animatedPreviewProcessingGroup;
	UIViewController* _contentPresenter;
	NSLayoutConstraint* _madWidthConstraint;
	NSLayoutConstraint* _madHeightConstraint;
	NSLayoutConstraint* _madLeadingConstraint;
	NSLayoutConstraint* _madTrailingConstraint;
	NSLayoutConstraint* _madTopConstraint;
	NSLayoutConstraint* _madBottomConstraint;
	NSLayoutConstraint* _madExpandedAppButtonsHeightConstraint;
	JFXOrientationMonitor* _orientationMonitor;

}

@property (assign,nonatomic,__weak) id<CFXEffectBrowserViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CFXEffectPickerViewController * effectPickerViewController;                                //@synthesize effectPickerViewController=_effectPickerViewController - In the implementation block
@property (nonatomic,retain) UIView * messagesAppsDockContainerView;                                                    //@synthesize messagesAppsDockContainerView=_messagesAppsDockContainerView - In the implementation block
@property (nonatomic,retain) IMADockViewController * messagesAppsDockViewController;                                    //@synthesize messagesAppsDockViewController=_messagesAppsDockViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> animatedPreviewWritingSemaphore;                          //@synthesize animatedPreviewWritingSemaphore=_animatedPreviewWritingSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> animatedPreviewWritingQueue;                                  //@synthesize animatedPreviewWritingQueue=_animatedPreviewWritingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> animatedPreviewProcessingGroup;                               //@synthesize animatedPreviewProcessingGroup=_animatedPreviewProcessingGroup - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * contentPresenter;                                                //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madWidthConstraint;                                                   //@synthesize madWidthConstraint=_madWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madHeightConstraint;                                                  //@synthesize madHeightConstraint=_madHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madLeadingConstraint;                                                 //@synthesize madLeadingConstraint=_madLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madTrailingConstraint;                                                //@synthesize madTrailingConstraint=_madTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madTopConstraint;                                                     //@synthesize madTopConstraint=_madTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madBottomConstraint;                                                  //@synthesize madBottomConstraint=_madBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * madExpandedAppButtonsHeightConstraint;                                //@synthesize madExpandedAppButtonsHeightConstraint=_madExpandedAppButtonsHeightConstraint - In the implementation block
@property (nonatomic,retain) NSString * selectedAppIdentifier;                                                          //@synthesize selectedAppIdentifier=_selectedAppIdentifier - In the implementation block
@property (nonatomic,retain) JFXOrientationMonitor * orientationMonitor;                                                //@synthesize orientationMonitor=_orientationMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<CFXEffectBrowserContentPresenterDelegate> contentPresenterDelegate;              //@synthesize contentPresenterDelegate=_contentPresenterDelegate - In the implementation block
@property (assign,nonatomic) BOOL showAppIconBorders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * dockPresentationViewController; 
@property (nonatomic,readonly) BOOL expandedAppShouldDismissOnDragSuccess; 
@property (nonatomic,readonly) CGSize expandedAppViewControllerSize; 
+(CGSize)CFX_sizeOfImageAtURL:(id)arg1 ;
+(CGSize)CFX_droppedSizeForSticker:(id)arg1 dropTarget:(id)arg2 ;
-(void)addSticker:(id)arg1 ;
-(void)dealloc;
-(void)avatarPickerDidEndCameraSession:(id)arg1 ;
-(void)avatarPickerWillStartCameraSession:(id)arg1 ;
-(CFXEffectPickerViewController *)effectPickerViewController;
-(void)viewDidLayoutSubviews;
-(void)setEffectPickerViewController:(CFXEffectPickerViewController *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDelegate:(id<CFXEffectBrowserViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id<CFXEffectBrowserViewControllerDelegate>)delegate;
-(void)avatarPicker:(id)arg1 didSelectAvatarRecord:(id)arg2 ;
-(void)viewDidLoad;
-(UIViewController *)contentPresenter;
-(void)setContentPresenter:(UIViewController *)arg1 ;
-(id)initWithDelegate:(id)arg1 contentPresenter:(id)arg2 ;
-(void)setContentPresenterDelegate:(id<CFXEffectBrowserContentPresenterDelegate>)arg1 ;
-(void)hideBrowserAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)selectedAppIdentifier;
-(id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1 ;
-(id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1 ;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(void)setShowAppIconBorders:(BOOL)arg1 ;
-(void)configureUIForOrientation;
-(JFXOrientationMonitor *)orientationMonitor;
-(void)refreshEffectBrowserForCameraFlip;
-(void)setOrientationMonitor:(JFXOrientationMonitor *)arg1 ;
-(void)effectPickerViewController:(id)arg1 didPickEffect:(id)arg2 ;
-(id)selectedFilterIdentifierForEffectPickerViewController:(id)arg1 ;
-(id)orientationStateForEffectPickerViewController:(id)arg1 ;
-(IMADockViewController *)messagesAppsDockViewController;
-(void)initMessagesAppsDockViewController;
-(NSLayoutConstraint *)madTopConstraint;
-(NSLayoutConstraint *)madWidthConstraint;
-(NSLayoutConstraint *)madHeightConstraint;
-(NSLayoutConstraint *)madBottomConstraint;
-(NSLayoutConstraint *)madLeadingConstraint;
-(NSLayoutConstraint *)madTrailingConstraint;
-(void)removeEffectPickerViewController;
-(UIView *)messagesAppsDockContainerView;
-(void)setMessagesAppsDockViewController:(IMADockViewController *)arg1 ;
-(void)setMessagesAppsDockContainerView:(UIView *)arg1 ;
-(id<CFXEffectBrowserContentPresenterDelegate>)contentPresenterDelegate;
-(void)setMadWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMadExpandedAppButtonsHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)madExpandedAppButtonsHeightConstraint;
-(void)CFX_updateAVTAvatarPickerforMessagesAppViewController:(id)arg1 ;
-(void)compactCurrentMessagesApp;
-(void)CFX_addSticker:(id)arg1 atDropTarget:(id)arg2 ;
-(void)setSelectedAppIdentifier:(NSString *)arg1 ;
-(void)displayPickerForEffectTypeIdentifier:(id)arg1 messagesAppViewController:(id)arg2 embedInMessageAppViewController:(BOOL)arg3 ;
-(void)addSticker:(id)arg1 atDropTarget:(id)arg2 ;
-(UIViewController *)dockPresentationViewController;
-(void)didSelectAppWithBundleIdentifier:(id)arg1 ;
-(void)presentExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)expandedAppShouldDismissOnDragSuccess;
-(CGSize)expandedAppViewControllerSize;
-(void)dockDidMagnify:(BOOL)arg1 ;
-(BOOL)showAppIconBorders;
-(void)commitAnimatedLayoutChanges;
-(NSObject*<OS_dispatch_semaphore>)animatedPreviewWritingSemaphore;
-(void)setAnimatedPreviewWritingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)animatedPreviewWritingQueue;
-(void)setAnimatedPreviewWritingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)animatedPreviewProcessingGroup;
-(void)setAnimatedPreviewProcessingGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end
