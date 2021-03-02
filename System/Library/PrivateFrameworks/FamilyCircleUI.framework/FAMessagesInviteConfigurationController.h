/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMessageComposeViewControllerInternalDelegate.h>
#import <libobjc.A.dylib/FAInviteConfigurationController.h>

@protocol FAInviteControllerDelegate;
@class MFMessageComposeViewController, LPLinkMetadata, UIViewController, NSArray, FAInviteContext, NSString;

@interface FAMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerInternalDelegate, FAInviteConfigurationController> {

	MFMessageComposeViewController* _messageComposeViewController;
	LPLinkMetadata* _linkMetadata;
	UIViewController* _presentationContext;
	NSArray* _recipientAddresses;
	id<FAInviteControllerDelegate> _delegate;
	FAInviteContext* _context;

}

@property (nonatomic,readonly) FAInviteContext * context;                                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FAInviteControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAvailable;
-(void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(id)_messageComposeViewController;
-(void)setDelegate:(id<FAInviteControllerDelegate>)arg1 ;
-(FAInviteContext *)context;
-(id<FAInviteControllerDelegate>)delegate;
-(void)_presentInviteControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWhenReadyWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithInviteContext:(id)arg1 presentingController:(id)arg2 ;
@end
