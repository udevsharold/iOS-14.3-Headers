/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray, NSNumber;

@interface ADRecipe : NSObject {

	BOOL _isMissingRequiredData;
	NSString* _experimentID;
	NSDictionary* _translationMap;
	NSArray* _testWeights;
	NSNumber* _scalingRatio;

}

@property (nonatomic,retain) NSString * experimentID;                    //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,retain) NSDictionary * translationMap;              //@synthesize translationMap=_translationMap - In the implementation block
@property (nonatomic,retain) NSArray * testWeights;                      //@synthesize testWeights=_testWeights - In the implementation block
@property (nonatomic,retain) NSNumber * scalingRatio;                    //@synthesize scalingRatio=_scalingRatio - In the implementation block
@property (assign,nonatomic) BOOL isMissingRequiredData;                 //@synthesize isMissingRequiredData=_isMissingRequiredData - In the implementation block
-(NSString *)experimentID;
-(void)setTranslationMap:(NSDictionary *)arg1 ;
-(NSDictionary *)translationMap;
-(id)initWithDictionary:(id)arg1 ;
-(void)setExperimentID:(NSString *)arg1 ;
-(id)translationWeights:(id)arg1 ;
-(NSArray *)testWeights;
-(void)setTestWeights:(NSArray *)arg1 ;
-(NSNumber *)scalingRatio;
-(void)setScalingRatio:(NSNumber *)arg1 ;
-(BOOL)isMissingRequiredData;
-(void)setIsMissingRequiredData:(BOOL)arg1 ;
@end
