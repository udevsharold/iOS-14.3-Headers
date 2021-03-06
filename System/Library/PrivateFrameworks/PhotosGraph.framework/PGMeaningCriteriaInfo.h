/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGMeaningCriteriaInfo : NSObject {

	NSString* _meaningLabel;
	double _version;
	unsigned long long _criteriaNumber;

}

@property (nonatomic,retain) NSString * meaningLabel;                        //@synthesize meaningLabel=_meaningLabel - In the implementation block
@property (assign,nonatomic) double version;                                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long criteriaNumber;              //@synthesize criteriaNumber=_criteriaNumber - In the implementation block
-(double)version;
-(void)setVersion:(double)arg1 ;
-(NSString *)meaningLabel;
-(void)setMeaningLabel:(NSString *)arg1 ;
-(unsigned long long)criteriaNumber;
-(void)setCriteriaNumber:(unsigned long long)arg1 ;
@end

