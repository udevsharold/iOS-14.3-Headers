/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSMSCompose;
@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id<CKSMSCompose> _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                       //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) id<CKSMSCompose> serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(id)init;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSMutableArray *)queuedInvocations;
-(id<CKSMSCompose>)serviceViewControllerProxy;
@end

