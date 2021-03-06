/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray, NSOrderedSet, NSURL, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding> {

	BOOL _isUpdatable;
	NSDictionary* _inputDescriptionsByName;
	NSDictionary* _outputDescriptionsByName;
	NSString* _predictedFeatureName;
	NSString* _predictedProbabilitiesName;
	NSDictionary* _metadata;
	NSArray* _classLabels;
	NSOrderedSet* _inputFeatureNames;
	NSOrderedSet* _outputFeatureNames;
	NSURL* _modelURL;
	NSDictionary* _trainingInputDescriptionsByName;
	NSDictionary* _parameterDescriptionsByKey;
	MLLayerPath* _modelPath;

}

@property (retain) NSOrderedSet * inputFeatureNames;                                      //@synthesize inputFeatureNames=_inputFeatureNames - In the implementation block
@property (retain) NSOrderedSet * outputFeatureNames;                                     //@synthesize outputFeatureNames=_outputFeatureNames - In the implementation block
@property (nonatomic,copy) NSArray * classLabels;                                         //@synthesize classLabels=_classLabels - In the implementation block
@property (nonatomic,retain) NSURL * modelURL;                                            //@synthesize modelURL=_modelURL - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                                            //@synthesize isUpdatable=_isUpdatable - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingInputDescriptionsByName;              //@synthesize trainingInputDescriptionsByName=_trainingInputDescriptionsByName - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptionsByKey;                   //@synthesize parameterDescriptionsByKey=_parameterDescriptionsByKey - In the implementation block
@property (nonatomic,retain) MLLayerPath * modelPath;                                     //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,readonly) NSDictionary * inputDescriptionsByName;                    //@synthesize inputDescriptionsByName=_inputDescriptionsByName - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputDescriptionsByName;                   //@synthesize outputDescriptionsByName=_outputDescriptionsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedFeatureName;                      //@synthesize predictedFeatureName=_predictedFeatureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * predictedProbabilitiesName;                //@synthesize predictedProbabilitiesName=_predictedProbabilitiesName - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithSpecification:(MLModelSpecification*)arg1 ;
+(id)metadataWithFormat:(MLModelMetadataSpecification*)arg1 ;
-(NSOrderedSet *)inputFeatureNames;
-(NSDictionary *)outputDescriptionsByName;
-(id)debugQuickLookObject;
-(id)initWithInputDescriptionsAndFeatureNames:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 inputFeatureNames:(id)arg6 outputFeatureNames:(id)arg7 metadata:(id)arg8 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(void)setModelPath:(MLLayerPath *)arg1 ;
-(NSString *)predictedProbabilitiesName;
-(NSDictionary *)trainingInputDescriptionsByName;
-(void)setModelURL:(NSURL *)arg1 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 trainingInputDescriptions:(id)arg5 metadata:(id)arg6 ;
-(BOOL)verifyInput:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSArray *)classLabels;
-(NSDictionary *)inputDescriptionsByName;
-(BOOL)isEqual:(id)arg1 ;
-(MLLayerPath *)modelPath;
-(void)setClassLabels:(NSArray *)arg1 ;
-(BOOL)isEqualToDescription:(id)arg1 ;
-(BOOL)isUpdatable;
-(void)setOutputFeatureNames:(NSOrderedSet *)arg1 ;
-(NSString *)predictedFeatureName;
-(NSOrderedSet *)outputFeatureNames;
-(void)setTrainingInputDescriptionsByName:(NSDictionary *)arg1 ;
-(void)setParameterDescriptionsByKey:(NSDictionary *)arg1 ;
-(void)setInputFeatureNames:(NSOrderedSet *)arg1 ;
-(NSURL *)modelURL;
-(NSDictionary *)parameterDescriptionsByKey;
-(id)initWithModelDescriptionSpecification:(MLModelDescriptionSpecification*)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

