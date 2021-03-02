/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDFHIRRequestTask.h>

@class HDFHIRCredential;

@interface HDFHIRRefreshTokenTask : HDFHIRRequestTask {

	HDFHIRCredential* _credential;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) HDFHIRCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(HDFHIRCredential *)credential;
-(id)completionHandler;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)createURLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(id)initWithSession:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
