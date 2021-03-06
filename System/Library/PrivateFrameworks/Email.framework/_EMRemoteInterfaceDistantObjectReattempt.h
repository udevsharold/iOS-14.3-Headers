/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation, NSError;

@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject {

	NSInvocation* _invocation;
	NSError* _error;

}

@property (readonly) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
+(id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(NSError *)error;
-(void)perform;
-(id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(NSInvocation *)invocation;
-(id)debugDescription;
@end

