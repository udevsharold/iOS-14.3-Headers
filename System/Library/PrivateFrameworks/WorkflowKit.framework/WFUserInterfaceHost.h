/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFUserInterfaceHost <NSObject>
@property (nonatomic,readonly) NSString * userInterfaceType; 
@optional
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)showHandleInteraction:(id)arg1 prompt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)showConfirmInteraction:(id)arg1 prompt:(id)arg2 requireAuthentication:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)requestedFromAnotherDevice;
-(void)showPreviewForContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)shouldNotHandoff;
-(id)dialogTransformer;
-(BOOL)openURL:(id)arg1 withBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)presentAlert:(id)arg1;
-(NSString *)userInterfaceType;

@end

