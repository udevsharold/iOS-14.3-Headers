/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSArray;


@protocol ARTechniqueProtocol
@property (__weak) id<ARTechniqueDelegate> delegate; 
@property (assign) unsigned long long powerUsage; 
@property (assign) double bonusLatency; 
@property (readonly) NSNumber * traceKey; 
@property (retain) NSArray * splitTechniques; 
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy; 
@required
+(BOOL)producesResultDataForAnchorOfClass:(Class)arg1;
+(id)techniqueOfClass:(Class)arg1 inArray:(id)arg2;
+(id)techniqueMatchingPredicate:(id)arg1 inArray:(id)arg2;
-(id)processData:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)prepare:(BOOL)arg1;
-(id<ARTechniqueDelegate>)delegate;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(NSNumber *)traceKey;
-(BOOL)deterministicMode;
-(void)setPowerUsage:(unsigned long long)arg1;
-(long long)captureBehavior;
-(unsigned long long)powerUsage;
-(id)initWithTechniques:(id)arg1;
-(id)initWithParallelTechniques:(id)arg1;
-(NSArray *)splitTechniques;
-(void)setSplitTechniques:(id)arg1;
-(void)setSplitTechniqueFowardingStrategy:(id)arg1;
-(id<ARTechniqueForwardingStrategy>)splitTechniqueFowardingStrategy;
-(id)techniqueOfClass:(Class)arg1;
-(id)techniqueMatchingPredicate:(id)arg1;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
-(void)replaceTechniques:(id)arg1;
-(double)bonusLatency;
-(void)setBonusLatency:(double)arg1;

@end

