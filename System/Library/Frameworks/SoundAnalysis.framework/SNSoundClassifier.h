/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class MLModel, NSArray, NSString;

@interface SNSoundClassifier : NSObject <SNAnalyzing> {

	MLModel* _model;
	shared_ptr<DSPGraph::Graph>* _graph;
	int _modelBlockSize;
	int _resultsToDiscardCount;
	NSArray* _feedbackConnections;
	double _overlapFactor;

}

@property (readonly) double overlapFactor;                                      //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (nonatomic,readonly) Box* resultsBox; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)completeTimingInfoInResult:(id)arg1 usingBox:(Box*)arg2 modelBlockSize:(long long)arg3 ;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)init;
-(Box*)resultsBox;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(void)primeGraph;
-(double)overlapFactor;
-(id)initWithMLModel:(id)arg1 overlapFactor:(double)arg2 error:(id*)arg3 ;
@end
