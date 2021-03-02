/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>
#import <AVFCore/AVAssetWriterInputMediaDataRequesterDelegate.h>
#import <AVFCore/AVWeakObservable.h>
#import <AVFCore/AVKeyPathDependencyHost.h>

@protocol OS_dispatch_queue;
@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVKeyPathDependencyManager, NSObject, NSString;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost> {

	AVFigAssetWriterTrack* _assetWriterTrack;
	AVAssetWriterInputMediaDataRequester* _mediaDataRequester;
	BOOL _observingSelf;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVAssetWriterInputPassDescription* _currentPassDescription;
	AVKeyPathDependencyManager* _keyPathDependencyManager;
	NSObject*<OS_dispatch_queue> _mediaDataRequesterSerialQueue;
	NSObject*<OS_dispatch_queue> _readyForMoreMediaDataObserverSerialQueue;

}

@property (getter=_assetWriterTrack,nonatomic,readonly) AVFigAssetWriterTrack * assetWriterTrack;              //@synthesize assetWriterTrack=_assetWriterTrack - In the implementation block
@property (nonatomic,retain) AVAssetWriterInputPassDescription * currentPassDescription;                       //@synthesize currentPassDescription=_currentPassDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRequestingMediaData;
-(BOOL)isReadyForMoreMediaData;
-(id)_assetWriterTrack;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)markCurrentPassAsFinished;
-(void)dealloc;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(void)_startObservingReadyForMoreMediaDataKeyPath;
-(void)markAsFinishedAndTransitionCurrentHelper:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
-(long long)status;
-(void)prepareToEndSession;
-(void)didStartInitialSession;
-(void)beginPassIfAppropriate;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)_nudgeMediaDataRequesterIfAppropriate:(id)arg1 ;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(void)setCurrentPassDescription:(AVAssetWriterInputPassDescription *)arg1 ;
-(void)markAsFinished;
-(void)_stopObservingReadyForMoreMediaDataKeyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
@end
