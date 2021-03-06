/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NSDictionary, NSString;

@interface NLModelImplNX : NLModelImpl {

	void* _nlModel;
	void* _modelContainer;
	NLModelConfiguration* _configuration;
	NSDictionary* _labelMap;
	unsigned long long _numberOfTrainingInstances;
	NSString* _trainingLanguage;

}
-(unsigned long long)systemVersion;
-(id)modelData;
-(void)dealloc;
-(id)configuration;
-(id)predictedLabelForString:(id)arg1 ;
-(id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id*)arg8 ;
-(id)initWithModelTrainer:(id)arg1 error:(id*)arg2 ;
-(id)predictedLabelsForTokens:(id)arg1 ;
-(id)labelMap;
-(id)trainingInfo;
-(id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTrainingInstances;
-(id)initWithModelContainer:(void*)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 ;
-(id)predictedLabelsDictionaryForString:(id)arg1 ;
-(id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2 ;
@end

