/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/NAVNewsArticleViewerRemoteProviderType.h>

@class NSString;

@interface NSSNewsRemoteViewController : _UIRemoteViewController <NAVNewsArticleViewerRemoteProviderType>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)articleViewerRemoteProviderShouldDismissAnimated:(BOOL)arg1 ;
@end

