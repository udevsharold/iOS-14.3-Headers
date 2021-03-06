/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MFMailComposeRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailCompositionAdditionalDonating.h>
#import <libobjc.A.dylib/MFMailCompositionShareSheetRecipients.h>

@protocol MFMailComposeViewControllerDelegate;
@class NSArray, NSString, MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, _UIAsyncInvocation, NSMutableArray, NSMutableDictionary, NSError;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients> {

	MFMailComposePlaceholderViewController* _placeholderViewController;
	MFMailComposeRemoteViewController* _serviceViewController;
	_UIAsyncInvocation* _cancellationInvocation;
	unsigned long long _defaultContentVariationIndex;
	NSMutableArray* _contentVariations;
	NSMutableDictionary* _compositionValues;
	NSMutableArray* _attachments;
	NSString* _placeholderSubject;
	long long _composeResult;
	NSError* _composeResultError;
	double _presentationDelayBeganTimestamp;
	unsigned _hasDelayedPresentation : 1;
	unsigned _didEndDelayedPresentation : 1;
	unsigned _compositionValuesAreFinalized : 1;
	unsigned _remoteViewControllerIsConfigured : 1;
	unsigned _isAppearing : 1;
	unsigned _didAppear : 1;
	unsigned _didFinish : 1;
	unsigned _delegateRespondsToBodyFinishedLoadingWithResult : 1;
	id<MFMailComposeViewControllerDelegate> _mailComposeDelegate;

}

@property (assign,nonatomic,__weak) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;              //@synthesize mailComposeDelegate=_mailComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * UTITypes; 
@property (nonatomic,copy) NSArray * photoIDs; 
@property (nonatomic,copy) NSArray * cloudPhotoIDs; 
@property (nonatomic,copy) NSArray * contentText; 
@property (nonatomic,copy) NSArray * contentURLs; 
@property (nonatomic,copy) NSString * shareSheetSessionID; 
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)setSubject:(id)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)setPreferredSendingEmailAddress:(id)arg1 ;
-(id)addContentVariationWithName:(id)arg1 ;
-(void)setDefaultContentVariation:(id)arg1 ;
-(id)addAttachmentFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)addAttachmentItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)finalizeCompositionValues;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id<MFMailComposeViewControllerDelegate>)mailComposeDelegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setContentURLs:(NSArray *)arg1 ;
-(id)remoteViewController;
-(void)setPhotoIDs:(NSArray *)arg1 ;
-(void)setCloudPhotoIDs:(NSArray *)arg1 ;
-(void)setShareSheetSessionID:(NSString *)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)dealloc;
-(void)setShowKeyboardImmediately:(BOOL)arg1 ;
-(void)setMailComposeDelegate:(id<MFMailComposeViewControllerDelegate>)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setToRecipients:(id)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)setAutosaveIdentifier:(id)arg1 ;
-(NSArray *)contentText;
-(void)setUTITypes:(NSArray *)arg1 ;
-(NSArray *)photoIDs;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)UTITypes;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(void)setContentText:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)_serviceViewControllerReady:(id)arg1 error:(id)arg2 ;
-(void)_cancelComposition:(id)arg1 ;
-(void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1 ;
-(void)_notifyCompositionDidFinish;
-(void)_beginDelayingCompositionPresenation;
-(void)_didEndDelayingCompositionPresentation;
-(void)_configureRemoteViewContoller;
-(void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1 ;
-(NSArray *)cloudPhotoIDs;
-(id)placeholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 proxy:(id)arg5 ;
-(id)securityScopeForURL:(id)arg1 proxy:(id)arg2 ;
-(void)_processAttachmentsViaProxy:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1 ;
-(void)compositionFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)_endDelayingCompositionPresentation;
-(void)_cancelRemoteServiceViewControllerRequest;
-(void)_setCompositionValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPlaceHolderSubject:(id)arg1 ;
-(void)compositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)compositionViewServiceTerminatedWithError:(id)arg1 ;
-(NSArray *)contentURLs;
-(NSString *)shareSheetSessionID;
-(void)viewDidLoad;
@end

