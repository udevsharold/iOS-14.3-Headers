/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject {

	AVURLAsset* _asset;
	/*^block*/id _completionHandler;

}

@property (nonatomic,__weak,readonly) AVURLAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(AVURLAsset *)asset;
-(void)dealloc;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithAsset:(id)arg1 ;
-(void)_downloadCompleteSuccessNotification:(id)arg1 ;
-(void)_downloadCompleteFailedNotification:(id)arg1 ;
-(void)_notifyCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

