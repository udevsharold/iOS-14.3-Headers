/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol VSSupportedAppsViewControllerDelegate;
@class VSOptional, VSAuditToken, NSOperationQueue, NSArray;

@interface VSSupportedAppsViewController : UIViewController {

	VSOptional* _identityProvider;
	VSAuditToken* _auditToken;
	id<VSSupportedAppsViewControllerDelegate> _delegate;
	NSOperationQueue* _privateQueue;
	NSArray* _apps;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSArray * apps;                                                           //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) VSOptional * identityProvider;                                          //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<VSSupportedAppsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSArray *)apps;
-(void)setApps:(NSArray *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)_didFinish;
-(VSAuditToken *)auditToken;
-(void)setDelegate:(id<VSSupportedAppsViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<VSSupportedAppsViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(VSOptional *)identityProvider;
-(void)setIdentityProvider:(VSOptional *)arg1 ;
-(void)beginLoadingApps;
-(void)_presentError:(id)arg1 ;
-(void)_doneButtonPresed:(id)arg1 ;
-(void)_finishLoadingApps:(id)arg1 ;
@end
