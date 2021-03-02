/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLUpdateProgressHandlers : NSObject {

	long long _interestedEvents;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (assign) long long interestedEvents;              //@synthesize interestedEvents=_interestedEvents - In the implementation block
@property (copy) id progressHandler;                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setProgressHandler:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)description;
-(id)progressHandler;
-(long long)interestedEvents;
-(id)initForEvents:(long long)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5 ;
-(void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2 ;
-(void)setInterestedEvents:(long long)arg1 ;
@end
