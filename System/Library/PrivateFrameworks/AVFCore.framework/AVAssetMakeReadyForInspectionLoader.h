/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	long long _status;
	int _basicInspectionFailureCode;
	NSURL* _URL;

}
-(long long)_status;
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(BOOL)isPlayable;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)isReadable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)assetInspector;
-(void)_setStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(long long)firstFragmentSequenceNumber;
-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2 ;
-(BOOL)_providesAccurateTiming;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(long long)fragmentCount;
-(BOOL)_isStreaming;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(id)URL;
-(id)figChapterGroupInfo;
-(SCD_Struct_AV6)duration;
-(BOOL)isComposable;
-(id)lyrics;
-(OpaqueFigFormatReaderRef)_formatReader;
@end

