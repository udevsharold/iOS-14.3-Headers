/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {

	AVAssetReaderOutputInternal* _internal;

}

@property (getter=_weakReferenceToAssetReader,nonatomic,readonly) AVWeakReference * weakReferenceToAssetReader; 
@property (assign,setter=_setExtractionID:,getter=_extractionID,nonatomic) int extractionID; 
@property (getter=_figAssetReaderExtractionOptions,nonatomic,readonly) NSDictionary * figAssetReaderExtractionOptions; 
@property (getter=_trimsSampleDurations,nonatomic,readonly) BOOL trimsSampleDurations; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (assign,nonatomic) BOOL alwaysCopiesSampleData; 
+(void)initialize;
+(id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(long long)_status;
-(id)_asset;
-(id)init;
-(NSString *)mediaType;
-(BOOL)_isFinished;
-(int)_extractionID;
-(id)_errorForOSStatus:(int)arg1 ;
-(void)_attachToWeakReferenceToAssetReader:(id)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(void)_cancelReading;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)supportsRandomAccess;
-(id)currentTimeRanges;
-(void)_setFigAssetReader:(OpaqueFigAssetReaderRef)arg1 ;
-(id)_weakReferenceToAssetReader;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(void)_markAsFinished;
-(void)markConfigurationAsFinal;
-(BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1 ;
-(void)setAlwaysCopiesSampleData:(BOOL)arg1 ;
-(void)_setExtractionID:(int)arg1 ;
-(void)setSupportsRandomAccess:(BOOL)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1 ;
-(void)resetForReadingTimeRanges:(id)arg1 ;
-(void)_figAssetReaderFailed;
-(void)_figAssetReaderServerConnectionDied;
-(void)dealloc;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
@end

