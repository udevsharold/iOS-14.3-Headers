/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, MPStoreLyricsRequest;

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	MPStoreLyricsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPStoreLyricsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                          //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)_lyricsURLForURLBagDictionary:(id)arg1 ;
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
-(id)init;
-(void)execute;
-(MPStoreLyricsRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2 allowingAuthentication:(BOOL)arg3 ;
-(void)setRequest:(MPStoreLyricsRequest *)arg1 ;
-(void)cancel;
@end
