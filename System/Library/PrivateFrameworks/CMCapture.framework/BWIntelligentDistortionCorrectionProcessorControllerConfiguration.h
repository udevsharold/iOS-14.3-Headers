/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class NSArray, NSDictionary;

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BOOL _intelligentDistortionCorrectionEnabled;
	NSArray* _portTypesWithGeometricDistortionCorrectionEnabled;
	int _intelligentDistortionCorrectionVersion;
	SCD_Struct_BW154 _processorConfig;
	NSDictionary* _providedInferenceAttachedMediaByMode;

}

@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;                              //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (nonatomic,retain) NSArray * portTypesWithGeometricDistortionCorrectionEnabled;              //@synthesize portTypesWithGeometricDistortionCorrectionEnabled=_portTypesWithGeometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionVersion;                               //@synthesize intelligentDistortionCorrectionVersion=_intelligentDistortionCorrectionVersion - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW154 processorConfig;                                         //@synthesize processorConfig=_processorConfig - In the implementation block
@property (nonatomic,retain) NSDictionary * providedInferenceAttachedMediaByMode;                      //@synthesize providedInferenceAttachedMediaByMode=_providedInferenceAttachedMediaByMode - In the implementation block
-(void)dealloc;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(int)intelligentDistortionCorrectionVersion;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(void)setProvidedInferenceAttachedMediaByMode:(NSDictionary *)arg1 ;
-(SCD_Struct_BW154)processorConfig;
-(void)setProcessorConfig:(SCD_Struct_BW154)arg1 ;
-(NSDictionary *)providedInferenceAttachedMediaByMode;
-(void)setIntelligentDistortionCorrectionVersion:(int)arg1 ;
-(void)setPortTypesWithGeometricDistortionCorrectionEnabled:(NSArray *)arg1 ;
-(NSArray *)portTypesWithGeometricDistortionCorrectionEnabled;
@end
