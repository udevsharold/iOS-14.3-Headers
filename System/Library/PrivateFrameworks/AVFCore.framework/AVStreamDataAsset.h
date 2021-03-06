/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class AVStreamDataParser, AVStreamDataAssetInspector, AVAssetSynchronousInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

@interface AVStreamDataAsset : AVAsset {

	AVStreamDataParser* _weakReferenceToParser;
	AVStreamDataAssetInspector* _inspector;
	AVAssetSynchronousInspectorLoader* _inspectorLoader;
	AVDispatchOnce* _tracksOnce;
	NSArray* _tracks;
	NSDictionary* _trackDictsByTrackID;

}
-(id)tracks;
-(void)dealloc;
-(Class)_classForTrackInspectors;
-(id)parser;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)initWithParser:(id)arg1 tracks:(id)arg2 ;
-(id)mediaTypeForTrackID:(int)arg1 ;
-(id)formatDescriptionsForTrackID:(int)arg1 ;
-(id)copyAssetWithReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forTrackID:(int)arg2 ;
-(id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2 ;
-(id)copyAssetRemovingTrackID:(int)arg1 ;
-(OpaqueFigFormatReaderRef)_formatReader;
@end

