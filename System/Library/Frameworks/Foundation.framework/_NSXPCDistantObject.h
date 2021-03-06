/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, NSXPCInterface, NSDictionary;

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {

	NSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	NSDictionary* _userInfo;
	/*^block*/id _errorBlock;
	unsigned long long _proxyNumber;
	unsigned long long _generationCount;
	unsigned long long _flags;
	double _timeout;

}

@property (retain,readonly) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) NSDictionary * _userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSXPCConnection *)_connection;
-(id)remoteObjectProxy;
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(/*^block*/id)arg6 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(NSDictionary *)_userInfo;
-(id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)set_userInfo:(NSDictionary *)arg1 ;
@end

