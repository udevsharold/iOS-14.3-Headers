/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPasswordRemoteViewController.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialRemoteViewControllerProtocol.h>

@class NSString;

@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>

@property (assign,nonatomic,__weak) id<SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)passwordServiceViewControllerName;
-(void)presentExternalPasswordCredentialRemoteViewController;
-(BOOL)_canShowWhileLocked;
@end

