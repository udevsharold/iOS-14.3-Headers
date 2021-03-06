/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject {

	NSArray* _momentNodes;
	NSMutableDictionary* _countBySpecialPOI;

}

@property (nonatomic,readonly) NSArray * momentNodes;                              //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countBySpecialPOI;              //@synthesize countBySpecialPOI=_countBySpecialPOI - In the implementation block
+(id)_nameBySpecialPOI;
+(BOOL)specialPOINameIsInString:(id)arg1 ;
+(unsigned long long)specialPOIsWithNameInString:(id)arg1 ;
+(BOOL)specialPOIContainsCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)_regionsBySpecialPOI;
+(unsigned long long)specialPOIsContainingCoordinate:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)specialPOIsInAnyMoment;
-(id)initWithMomentNodes:(id)arg1 ;
-(BOOL)anyMomentHasPOIAmusementPark;
-(NSArray *)momentNodes;
-(unsigned long long)specialPOIsWithMomentRatio:(double)arg1 ;
-(NSMutableDictionary *)countBySpecialPOI;
-(BOOL)anyMomentContainsSpecialPOI:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)arg1 ;
-(BOOL)momentsContainSpecialPOI:(unsigned long long)arg1 withMomentRatio:(double)arg2 ;
-(void)setCountBySpecialPOI:(NSMutableDictionary *)arg1 ;
-(unsigned long long)_numberOfMomentsInRegions:(id)arg1 containingAOIName:(id)arg2 ;
@end

