/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PGMeaningCriteriaInfo, NSArray;

@interface PGMeaningCriteriaEvaluator : NSObject {

	NSString* _meaningLabel;
	PGMeaningCriteriaInfo* _meaningCriteriaInfo;
	NSArray* _allMeaningCriteriaArray;

}

@property (nonatomic,retain) PGMeaningCriteriaInfo * meaningCriteriaInfo;              //@synthesize meaningCriteriaInfo=_meaningCriteriaInfo - In the implementation block
@property (nonatomic,retain) NSArray * allMeaningCriteriaArray;                        //@synthesize allMeaningCriteriaArray=_allMeaningCriteriaArray - In the implementation block
@property (nonatomic,readonly) NSString * meaningLabel;                                //@synthesize meaningLabel=_meaningLabel - In the implementation block
+(id)_allMeaningCriteriaClassArray;
+(id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg1 withDictionary:(id)arg2 ;
-(id)description;
-(NSString *)meaningLabel;
-(id)initWithDictionary:(id)arg1 meaningCriteriaInfo:(id)arg2 ;
-(BOOL)allCriteriaPassesForMomentNode:(id)arg1 ;
-(BOOL)allCriteriaIsValid;
-(PGMeaningCriteriaInfo *)meaningCriteriaInfo;
-(void)setMeaningCriteriaInfo:(PGMeaningCriteriaInfo *)arg1 ;
-(NSArray *)allMeaningCriteriaArray;
-(void)setAllMeaningCriteriaArray:(NSArray *)arg1 ;
@end
