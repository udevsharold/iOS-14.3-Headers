/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/_SFPageFormatMenuItemController.h>

@protocol _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;
@class _SFSettingsAlertItem, MCProfileConnection, UIViewController, NSString;

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {

	MCProfileConnection* _profileConnection;
	UIViewController* _enableTrackerProtectionViewController;
	id<_SFPageFormatMenuItemControllerDelegate> _delegate;
	id<_SFBrowserDocument> _document;

}

@property (nonatomic,readonly) id<_SFBrowserDocument> document;                                        //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _SFSettingsAlertItem * alertItem; 
@property (assign,nonatomic,__weak) id<_SFPageFormatMenuItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<_SFBrowserDocument>)document;
-(_SFSettingsAlertItem *)alertItem;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)_presentPrivacyReport;
-(void)_presentPromptToEnableTrackerProtection;
-(id)initWithDocument:(id)arg1 ;
-(void)_enableTrackerProtection;
-(void)_initializeManagedProfileConnection;
-(void)_dismissPromptIfTrackerProtectionEnabled;
-(void)setDelegate:(id<_SFPageFormatMenuItemControllerDelegate>)arg1 ;
-(id<_SFPageFormatMenuItemControllerDelegate>)delegate;
@end

