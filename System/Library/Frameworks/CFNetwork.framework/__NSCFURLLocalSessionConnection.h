/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionConnection.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_data;
@class NSObject, NSError, NSURLResponse, NSString;

@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSURLAuthenticationChallengeSender, NSCopying> {

	SessionConnectionLoadable* _loaderClient;
	URLConnectionLoader* _loader;
	BOOL _canceled;
	long long _suspended;
	NSObject*<OS_dispatch_data> _pendingData;
	long long _pendingCompletion;
	unsigned long long _didReceiveResponseDisposition;
	NSError* _pendingError;
	int _state;
	long long _clientBufferLength;
	NSObject*<OS_dispatch_data> _sniffData;
	NSURLResponse* _sniffResponse;
	BOOL _isMixedReplace;
	BOOL _didCheckMixedReplace;
	BOOL _didCheckCredentialsSuppliedInURL;
	BOOL _actuallyTriedCredentialsSuppliedInURL;
	unsigned long long _maxDataSegmentCoalesceThreshhold;
	unsigned long long _maxDataSegmentCount;
	unsigned _didReceiveDataCount;
	BOOL _canSendDidFinishCollectingMetrics;
	BOOL _ignoreLoaderEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsDownload:(BOOL)arg1 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)setBytesPerSecondLimit:(long long)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)_didFinishWithError:(id)arg1 ;
-(void)_conditionalRequirementsChanged:(BOOL)arg1 ;
-(void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didReceiveResponse:(id)arg1 sniff:(BOOL)arg2 rewrite:(BOOL)arg3 ;
-(void)dealloc;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)withLoaderAsync:(/*^block*/id)arg1 ;
-(void)_captureTransportConnection:(shared_ptr<TransportConnection>*)arg1 extraBytes:(id)arg2 ;
-(void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)cancel;
-(void)_connectionIsWaitingWithReason:(long long)arg1 ;
-(void)_didReceiveData:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)setPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)suspend;
-(void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ackBytes:(long long)arg1 ;
-(void)_didSendBodyData:(UploadProgressInfo)arg1 ;
-(void)_needNewBodyStream;
-(void)_didReceiveChallenge:(id)arg1 ;
-(void)resume;
@end

