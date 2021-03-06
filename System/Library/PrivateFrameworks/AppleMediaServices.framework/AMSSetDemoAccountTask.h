/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;

@interface AMSSetDemoAccountTask : AMSTask {

	AMSProcessInfo* _clientInfo;
	NSString* _password;
	NSString* _username;

}

@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * username;                      //@synthesize username=_username - In the implementation block
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)password;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)performTask;
@end

