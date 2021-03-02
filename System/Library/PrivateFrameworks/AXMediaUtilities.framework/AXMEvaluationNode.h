/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMVisionEngineNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding> {

	double _minimumConfidence;
	unsigned long long _priority;
	unsigned long long _effectivePriority;

}

@property (assign,nonatomic) unsigned long long effectivePriority;              //@synthesize effectivePriority=_effectivePriority - In the implementation block
@property (assign,nonatomic) double minimumConfidence;                          //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                       //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1 ;
+(unsigned long long)defaultPriority;
+(CGSize)preferredModelInputSize;
+(BOOL)isANEDeviceAvailable;
-(double)minimumConfidence;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setMinimumConfidence:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldEvaluate:(id)arg1 ;
-(void)boostEffectivePriority;
-(unsigned long long)effectivePriority;
-(void)resetEffectivePriority;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 metrics:(id)arg4 error:(id*)arg5 ;
-(unsigned long long)priority;
-(id)_diagnosticNameForRequests:(id)arg1 metrics:(id)arg2 ;
-(void)setEffectivePriority:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
