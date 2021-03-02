/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSRequestPresentationDelegate.h>

@class AMSURLSession, NSURLSessionTask, NSString;

@interface AMSBiometricsPresentationProxy : NSObject <AMSRequestPresentationDelegate> {

	AMSURLSession* _session;
	NSURLSessionTask* _task;

}

@property (nonatomic,readonly) AMSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSURLSession *)session;
-(id)initWithSession:(id)arg1 task:(id)arg2 ;
-(NSURLSessionTask *)task;
-(void)handleAuthenticateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
