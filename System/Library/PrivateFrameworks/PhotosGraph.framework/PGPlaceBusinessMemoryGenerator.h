/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _business;
	long long _year;

}

@property (assign,nonatomic) NSString * business;              //@synthesize business=_business - In the implementation block
@property (assign,nonatomic) long long year;                   //@synthesize year=_year - In the implementation block
-(long long)year;
-(void)setYear:(long long)arg1 ;
-(void)setBusiness:(NSString *)arg1 ;
-(NSString *)business;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end
