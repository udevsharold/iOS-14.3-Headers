/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SchoolTime/SchoolTime-Structs.h>
@class NSUUID, NSXPCConnection, NSString;

@interface SCLSuppressSchoolModeAssertion : NSObject {

	os_unfair_lock_s _lock;
	NSUUID* _UUID;
	NSXPCConnection* _connection;
	unsigned long long _state;
	NSString* _explanation;

}

@property (nonatomic,copy,readonly) NSString * explanation;              //@synthesize explanation=_explanation - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)connectionInterrupted;
-(NSString *)explanation;
-(void)connectionInvalidated;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(BOOL)isValid;
-(void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(id)initWithExplanation:(id)arg1 ;
-(id)description;
-(void)invalidate;
@end

