/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NLModelTrainerDelegate;
@class NLModelConfiguration, NLDataSet, NSDictionary, NLModel, NSError;

@interface NLModelTrainer : NSObject {

	NLModelConfiguration* _configuration;
	NLDataSet* _dataSet;
	NSDictionary* _options;
	NLModel* _model;
	NSError* _trainingError;
	id<NLModelTrainerDelegate> _delegate;
	BOOL _delegateRespondsToLogMessage;
	BOOL _delegateRespondsToShouldStop;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) NLDataSet * dataSet; 
@property (copy,readonly) NSDictionary * options; 
@property (readonly) id<NLModelTrainerDelegate> delegate; 
@property (copy,readonly) NLModel * trainedModel; 
@property (copy,readonly) NSError * trainingError; 
@property (copy,readonly) NSDictionary * testResults; 
+(id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(void)logMessage:(id)arg1 ;
-(void)trainModel;
-(void)setModel:(id)arg1 ;
-(id)model;
-(NLModelConfiguration *)configuration;
-(NLDataSet *)dataSet;
-(BOOL)shouldStop;
-(id<NLModelTrainerDelegate>)delegate;
-(NSDictionary *)options;
-(NLModel *)trainedModel;
-(NSError *)trainingError;
-(id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(Class)modelImplClass;
-(void)setTrainingError:(NSError *)arg1 ;
-(NSDictionary *)testResults;
-(void)trainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)trainerShouldStop:(id)arg1 ;
@end

