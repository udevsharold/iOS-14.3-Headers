/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class AVDispatchOnce, AVDisplayCriteria, NSURL, NSArray;

@interface AVFigAssetInspector : AVAssetInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigFormatReaderRef _formatReader;
	AVDispatchOnce* _formatReaderOnce;
	AVDispatchOnce* _checkIsStreamingOnce;
	AVDispatchOnce* _makeDisplayCriteriaOnce;
	AVDisplayCriteria* _displayCriteria;
	BOOL _isStreaming;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
-(float)preferredVolume;
-(id)creationDate;
-(BOOL)hasProtectedContent;
-(BOOL)isPlayable;
-(CGAffineTransform)preferredTransform;
-(OpaqueFigAssetRef)_figAsset;
-(id)_instanceIdentifier;
-(BOOL)containsFragments;
-(id)commonMetadata;
-(id)identifyingTag;
-(BOOL)isReadable;
-(float)preferredSoundCheckVolumeNormalization;
-(id)availableMetadataFormats;
-(CGSize)naturalSize;
-(id)metadataForFormat:(id)arg1 ;
-(id)availableVideoDynamicRanges;
-(BOOL)supportsAnalysisReporting;
-(void)dealloc;
-(id)propertyListForProxy;
-(NSURL *)resolvedURL;
-(unsigned long long)downloadToken;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(NSURL *)originalNetworkContentURL;
-(unsigned long long)hash;
-(id)_nameForProxy;
-(id)identifyingTagClass;
-(BOOL)_hasQTSaveRestriction;
-(long long)firstFragmentSequenceNumber;
-(id)SHA1Digest;
-(float)preferredRate;
-(BOOL)providesPreciseDurationAndTiming;
-(BOOL)isCompatibleWithAirPlayVideo;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(BOOL)isEqual:(id)arg1 ;
-(id)preferredDisplayCriteria;
-(long long)fragmentCount;
-(BOOL)_isStreaming;
-(id)_assetAnalysisMessages;
-(BOOL)isExportable;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)trackReferences;
-(NSURL *)URL;
-(id)alternateTrackGroups;
-(long long)trackCount;
-(NSArray *)figChapterGroupInfo;
-(SCD_Struct_AV6)duration;
-(BOOL)isComposable;
-(CGSize)maximumVideoResolution;
-(id)lyrics;
-(BOOL)canContainFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(SCD_Struct_AV6)overallDurationHint;
-(NSArray *)figChapters;
-(int)naturalTimeScale;
@end

