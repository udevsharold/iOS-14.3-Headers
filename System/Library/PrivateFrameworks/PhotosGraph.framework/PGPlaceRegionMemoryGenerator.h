/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _region;
	long long _year;

}

@property (assign,nonatomic) NSString * region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) long long year;                 //@synthesize year=_year - In the implementation block
-(void)setRegion:(NSString *)arg1 ;
-(long long)year;
-(void)setYear:(long long)arg1 ;
-(NSString *)region;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithRegionNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end

