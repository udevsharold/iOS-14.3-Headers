/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPRequestCancellationToken, OS_dispatch_source, MPRequestResponseControllerDelegate, OS_dispatch_queue;
@class NSObject, NSError;

@interface MPRequestResponseController : NSObject {

	long long _numberOfObservers;
	long long _requestRevision;
	BOOL _shouldAutomaticallyLoad;
	BOOL _needsReload;
	id<MPRequestCancellationToken> _cancelToken;
	double _retryInterval;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSError* _lastError;
	id _pendingResponse;
	unsigned long long _stateHandle;
	id _request;
	id _response;
	id<MPRequestResponseControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                          //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id response;                                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) id request;                                                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MPRequestResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reloadIfNeeded;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)init;
-(void)setNeedsReloadForSignificantRequestChange;
-(void)setNeedsReload;
-(id)request;
-(id)response;
-(void)dealloc;
-(void)_onQueue_reloadIfNeeded;
-(void)setResponse:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)setDelegate:(id<MPRequestResponseControllerDelegate>)arg1 ;
-(void)_responseDidInvalidate:(id)arg1 ;
-(void)endAutomaticResponseLoading;
-(void)_onQueue_scheduleRetryAfterInterval:(double)arg1 ;
-(void)beginAutomaticResponseLoading;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<MPRequestResponseControllerDelegate>)delegate;
@end
