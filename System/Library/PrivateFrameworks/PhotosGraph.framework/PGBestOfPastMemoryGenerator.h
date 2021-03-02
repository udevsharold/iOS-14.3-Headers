/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator {

	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (assign,nonatomic) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (assign,nonatomic) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(id)keyAssetCurationOptions;
@end
