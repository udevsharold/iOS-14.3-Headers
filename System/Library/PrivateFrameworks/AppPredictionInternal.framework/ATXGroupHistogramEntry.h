/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXGroupHistogramEntry : NSObject {

	int _count;
	double _score;

}

@property (nonatomic,readonly) int count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double score;              //@synthesize score=_score - In the implementation block
-(void)addScore:(double)arg1 ;
-(int)count;
-(id)initWithScore:(double)arg1 ;
-(double)score;
@end
