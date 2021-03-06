/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout;

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout {

	NFLPairSubBatchLayout* _leftPairComponent;
	NFLPairSubBatchLayout* _centerPairComponent;
	NFLPairSubBatchLayout* _rightPairComponent;

}

@property (nonatomic,retain) NFLPairSubBatchLayout * leftPairComponent;                //@synthesize leftPairComponent=_leftPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * centerPairComponent;              //@synthesize centerPairComponent=_centerPairComponent - In the implementation block
@property (nonatomic,retain) NFLPairSubBatchLayout * rightPairComponent;               //@synthesize rightPairComponent=_rightPairComponent - In the implementation block
-(double)rank;
-(unsigned long long)rowSpan;
-(BOOL)isValid;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(id)tileInfosUsed;
-(id)singleComponentLayouts;
-(NFLPairSubBatchLayout *)leftPairComponent;
-(NFLPairSubBatchLayout *)centerPairComponent;
-(NFLPairSubBatchLayout *)rightPairComponent;
-(void)setLeftPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setCenterPairComponent:(NFLPairSubBatchLayout *)arg1 ;
-(void)setRightPairComponent:(NFLPairSubBatchLayout *)arg1 ;
@end

