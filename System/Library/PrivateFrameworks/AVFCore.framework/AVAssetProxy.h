/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)assetProxyWithPropertyList:(id)arg1 ;
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
-(BOOL)isProxy;
-(OpaqueFigAssetRef)_figAsset;
-(id)tracks;
-(void)dealloc;
-(Class)_classForTrackInspectors;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)initWithPropertyList:(id)arg1 ;
-(OpaqueFigFormatReaderRef)_formatReader;
@end
