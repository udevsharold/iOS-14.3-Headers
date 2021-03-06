/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetWriterInputConfigurationState, AVWeakReference, NSString, AVOutputSettings, NSArray, NSDictionary, AVAssetWriterInputPassDescription, NSURL;

@interface AVAssetWriterInputHelper : NSObject {

	AVAssetWriterInputConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriterInput;

}

@property (nonatomic,readonly) AVAssetWriterInputConfigurationState * configurationState;               //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriterInput;                                   //@synthesize weakReferenceToAssetWriterInput=_weakReferenceToAssetWriterInput - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) AVOutputSettings * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) int mediaTimeScale; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * extendedLanguageTag; 
@property (assign,nonatomic) BOOL marksOutputTrackAsEnabled; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) long long layer; 
@property (assign,nonatomic) short alternateGroupID; 
@property (assign,nonatomic) short provisionalAlternateGroupID; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (assign,nonatomic) BOOL performsMultiPassEncodingIfSupported; 
@property (nonatomic,readonly) BOOL canPerformMultiplePasses; 
@property (nonatomic,readonly) AVAssetWriterInputPassDescription * currentPassDescription; 
@property (nonatomic,readonly) BOOL shouldRespondToInitialPassDescription; 
@property (assign,nonatomic) SCD_Struct_AV6 preferredMediaChunkDuration; 
@property (assign,nonatomic) long long preferredMediaChunkAlignment; 
@property (assign,nonatomic) long long preferredMediaChunkSize; 
@property (nonatomic,copy) NSString * mediaDataLocation; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,nonatomic) BOOL maximizePowerEfficiency; 
@property (nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(void)stopRequestingMediaData;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(NSString *)extendedLanguageTag;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(BOOL)marksOutputTrackAsEnabled;
-(float)preferredVolume;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setLanguageCode:(NSString *)arg1 ;
-(int)mediaTimeScale;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)performsMultiPassEncodingIfSupported;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(CGAffineTransform)transform;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(void)setExtendedLanguageTag:(NSString *)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(long long)preferredMediaChunkSize;
-(void)setLayer:(long long)arg1 ;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setAlternateGroupID:(short)arg1 ;
-(int)trackID;
-(void)setNaturalSize:(CGSize)arg1 ;
-(NSString *)languageCode;
-(short)provisionalAlternateGroupID;
-(BOOL)isReadyForMoreMediaData;
-(AVOutputSettings *)outputSettings;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGSize)naturalSize;
-(NSString *)mediaType;
-(NSArray *)metadata;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(void)markCurrentPassAsFinished;
-(void)dealloc;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1 ;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setWeakReferenceToAssetWriterInput:(AVWeakReference *)arg1 ;
-(BOOL)shouldRespondToInitialPassDescription;
-(AVWeakReference *)weakReferenceToAssetWriterInput;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1 ;
-(long long)status;
-(void)prepareToEndSession;
-(void)didStartInitialSession;
-(long long)layer;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)description;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(AVAssetWriterInputConfigurationState *)configurationState;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)prepareToFinishWritingReturningError:(id*)arg1 ;
-(AVAssetWriterInputPassDescription *)currentPassDescription;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(NSString *)mediaDataLocation;
-(void)setMediaDataLocation:(NSString *)arg1 ;
-(void)markAsFinished;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(short)alternateGroupID;
-(id)availableTrackAssociationTypes;
-(NSDictionary *)trackReferences;
-(void)setSourcePixelBufferAttributes:(NSDictionary *)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(void)setProvisionalAlternateGroupID:(short)arg1 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
@end

