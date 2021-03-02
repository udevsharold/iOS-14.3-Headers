/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXPCAutomaticErrorProxy.h>

@protocol FPXPCAutomaticErrorProxy
@required
-(id)remoteObjectProxy;
-(id)synchronousRemoteObjectProxy;

@end


@protocol NSXPCProxyCreating;
@class NSObject, Protocol, NSError, NSString;

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy> {

	NSObject*<NSXPCProxyCreating> _target;
	Protocol* _protocol;
	NSError* _error;
	/*^block*/id _requestWillBeginBlock;
	NSString* _name;
	id _retainSelfWhileMessageIsPending;
	BOOL _isSynchronous;
	AQ _retainCounter;
	int _pid;

}

@property (assign,nonatomic) int requestEffectivePid;              //@synthesize pid=_pid - In the implementation block
+(BOOL)sanitizeErrors;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)description;
-(id)synchronousRemoteObjectProxy;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 ;
-(/*^block*/id)_requestWillBegin:(SEL)arg1 requestID:(id)arg2 ;
-(int)requestEffectivePid;
-(id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 ;
-(void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 ;
-(void)setRequestEffectivePid:(int)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(/*^block*/id)arg6 requestDidFinish:(/*^block*/id)arg7 ;
@end
