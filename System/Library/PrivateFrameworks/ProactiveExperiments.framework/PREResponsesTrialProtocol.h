/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PREResponsesTrialProtocol
@property (readonly) NSString * inferenceModelName; 
@property (readonly) NSString * inferenceModelFilePath; 
@property (readonly) NSString * inferenceModelConfigPath; 
@property (readonly) NSString * espressoBinFilePath; 
@property (readonly) NSString * lexiconFilePath; 
@property (readonly) NSString * experimentId; 
@property (readonly) NSString * treatmentId; 
@required
-(NSString *)experimentId;
-(NSString *)treatmentId;
-(NSString *)inferenceModelConfigPath;
-(NSString *)espressoBinFilePath;
-(NSString *)inferenceModelFilePath;
-(NSString *)inferenceModelName;
-(NSString *)lexiconFilePath;

@end
