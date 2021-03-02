/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICMediaRedownloadRequest, MPCModelGenericAVItemAssetLoadProperties, ICStoreRequestContext;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICMediaRedownloadRequest* _mediaDownloadRequest;
	MPCModelGenericAVItemAssetLoadProperties* _assetLoadProperties;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPCModelGenericAVItemAssetLoadProperties * assetLoadProperties;              //@synthesize assetLoadProperties=_assetLoadProperties - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                        //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(id)responseHandler;
-(void)cancel;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setAssetLoadProperties:(MPCModelGenericAVItemAssetLoadProperties *)arg1 ;
-(MPCModelGenericAVItemAssetLoadProperties *)assetLoadProperties;
@end
