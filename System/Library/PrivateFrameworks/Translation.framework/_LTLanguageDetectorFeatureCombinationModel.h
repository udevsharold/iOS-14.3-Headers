/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel, NSString, NSMutableArray, NSNumber;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {

	MLModel* _mlModel;
	NSString* _modelInput;
	NSString* _modelOutput;
	NSMutableArray* _features;
	NSNumber* _missingLanguageDetectorDefault;

}
-(id)initWithConfig:(id)arg1 ;
-(id)getModelFeatures:(id)arg1 canonicalPair:(id)arg2 sourceSpeechResult:(id)arg3 targetSpeechResult:(id)arg4 ;
-(id)estimateLanguage:(id)arg1 languageDetectionResult:(id)arg2 finalSpeechResults:(id)arg3 ;
@end
