/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	int _semanticRenderingVersion;
	int _semanticDevelopmentVersion;
	BOOL _redEyeReductionEnabled;
	BOOL _providePersonMask;
	BOOL _generateInfoWhetherMasksContainValidContent;

}

@property (nonatomic,retain) BWVideoFormat * inputFormat;                                   //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) int semanticRenderingVersion;                                  //@synthesize semanticRenderingVersion=_semanticRenderingVersion - In the implementation block
@property (assign,nonatomic) int semanticDevelopmentVersion;                                //@synthesize semanticDevelopmentVersion=_semanticDevelopmentVersion - In the implementation block
@property (assign,nonatomic) BOOL redEyeReductionEnabled;                                   //@synthesize redEyeReductionEnabled=_redEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) BOOL providePersonMask;                                        //@synthesize providePersonMask=_providePersonMask - In the implementation block
@property (assign,nonatomic) BOOL generateInfoWhetherMasksContainValidContent;              //@synthesize generateInfoWhetherMasksContainValidContent=_generateInfoWhetherMasksContainValidContent - In the implementation block
-(BWVideoFormat *)inputFormat;
-(void)dealloc;
-(void)setSemanticDevelopmentVersion:(int)arg1 ;
-(void)setSemanticRenderingVersion:(int)arg1 ;
-(BOOL)providePersonMask;
-(void)setProvidePersonMask:(BOOL)arg1 ;
-(BOOL)generateInfoWhetherMasksContainValidContent;
-(void)setGenerateInfoWhetherMasksContainValidContent:(BOOL)arg1 ;
-(BOOL)redEyeReductionEnabled;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(void)setRedEyeReductionEnabled:(BOOL)arg1 ;
-(int)semanticDevelopmentVersion;
-(int)semanticRenderingVersion;
@end

