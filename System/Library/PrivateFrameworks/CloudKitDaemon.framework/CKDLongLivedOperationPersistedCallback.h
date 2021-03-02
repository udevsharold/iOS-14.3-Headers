/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class Protocol, NSInvocation;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding> {

	BOOL _isCompletionCallback;
	Protocol* _protocol;
	NSInvocation* _invocation;

}

@property (nonatomic,retain) Protocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (assign,nonatomic) BOOL isCompletionCallback;              //@synthesize isCompletionCallback=_isCompletionCallback - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProtocol:(Protocol *)arg1 ;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(Protocol *)protocol;
-(id)initWithCoder:(id)arg1 ;
-(NSInvocation *)invocation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 invocation:(id)arg2 isCompletionCallback:(BOOL)arg3 ;
-(void)_validateInvocation;
-(BOOL)isCompletionCallback;
-(void)setIsCompletionCallback:(BOOL)arg1 ;
@end
