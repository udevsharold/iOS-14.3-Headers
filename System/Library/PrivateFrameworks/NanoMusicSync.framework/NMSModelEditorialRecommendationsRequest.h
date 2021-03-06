/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <MediaPlayer/MPModelStoreBrowseRequest.h>

@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest {

	BOOL _nms_useCachedDataOnly;
	id _nms_cachedLoadedOutput;

}

@property (assign,nonatomic) BOOL nms_useCachedDataOnly;              //@synthesize nms_useCachedDataOnly=_nms_useCachedDataOnly - In the implementation block
@property (nonatomic,retain) id nms_cachedLoadedOutput;               //@synthesize nms_cachedLoadedOutput=_nms_cachedLoadedOutput - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setNms_cachedLoadedOutput:(id)arg1 ;
-(void)setNms_useCachedDataOnly:(BOOL)arg1 ;
-(BOOL)nms_useCachedDataOnly;
-(id)nms_cachedLoadedOutput;
@end

