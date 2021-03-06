/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>
#import <libobjc.A.dylib/CSNotificationDestination.h>

@protocol CSNotificationDispatcher;
@class NCNotificationRequest, NCNotificationAction, NSString;

@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination> {

	NCNotificationRequest* _request;
	NCNotificationAction* _primaryAction;
	NCNotificationAction* _secondaryAction;
	NCNotificationAction* _silenceAction;
	NCNotificationAction* _dismissAction;
	id<CSNotificationDispatcher> _dispatcher;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;               //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CSNotificationDispatcher> dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)postNotificationRequest:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 ;
-(void)notificationsLoadedForSectionIdentifier:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(BOOL)dismissNotificationInLongLookAnimated:(BOOL)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(long long)presentationPriority;
-(BOOL)isPresentingNotificationInLongLook;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(void)setDispatcher:(id<CSNotificationDispatcher>)arg1 ;
-(id<CSNotificationDispatcher>)dispatcher;
-(void)aggregateBehavior:(id)arg1 ;
-(long long)presentationType;
-(void)dealloc;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)volumeChanged:(id)arg1 ;
-(void)loadView;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(void)lockButtonPressed:(id)arg1 ;
-(void)_handleAction:(id)arg1 withName:(id)arg2 ;
-(void)_dismissFromSignificantUserInteraction;
-(void)_handleSilenceAction;
-(void)_handlePrimaryAction;
-(void)_handleDismissAction;
-(void)_handleSecondaryAction;
@end

