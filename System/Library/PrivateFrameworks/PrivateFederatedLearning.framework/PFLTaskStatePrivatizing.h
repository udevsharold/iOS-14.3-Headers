/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSData, NSDictionary, NSNumber;

@interface PFLTaskStatePrivatizing : NSObject <PFLTaskState> {

	NSData* _diff;
	NSDictionary* _metrics;
	NSNumber* _numValidationSamples;

}

@property (nonatomic,readonly) NSData * diff;                                //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics;                       //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSNumber * numValidationSamples;              //@synthesize numValidationSamples=_numValidationSamples - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)diff;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metrics;
-(void)suspend;
-(void)encodeWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)numValidationSamples;
-(id)initWithGradientDiff:(id)arg1 metrics:(id)arg2 numValidationSamples:(id)arg3 ;
@end
