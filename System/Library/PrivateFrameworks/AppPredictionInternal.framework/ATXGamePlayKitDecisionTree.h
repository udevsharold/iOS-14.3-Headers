/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLGKDecisionTree, ATXGamePlayKitDecisionNode, ATXGamePlayKitRandomSource;

@interface ATXGamePlayKitDecisionTree : NSObject <NSSecureCoding> {

	ATXGamePlayKitCDecisionTree* _decisionTree;
	BOOL _isInduced;
	MLGKDecisionTree* mlkitDecisionTree;
	ATXGamePlayKitDecisionNode* _rootNode;
	ATXGamePlayKitRandomSource* _randomSource;

}

@property (nonatomic,retain) ATXGamePlayKitDecisionNode * rootNode;                //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,copy) ATXGamePlayKitRandomSource * randomSource;              //@synthesize randomSource=_randomSource - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configureKeyedArchiver:(id)arg1 ;
+(void)configureKeyedUnarchiver:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 error:(id)arg2 ;
-(id)description;
-(void)setRootNode:(ATXGamePlayKitDecisionNode *)arg1 ;
-(ATXGamePlayKitDecisionNode *)rootNode;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXGamePlayKitRandomSource *)randomSource;
-(void)setRandomSource:(ATXGamePlayKitRandomSource *)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5 ratioForLeafNodeDecision:(double)arg6 ;
-(id)findActionForAnswers:(id)arg1 ;
-(id)initWithAttribute:(id)arg1 ;
-(id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
-(BOOL)exportToURL:(id)arg1 error:(id)arg2 ;
-(id)getFlattenedTree;
-(id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 ;
@end

