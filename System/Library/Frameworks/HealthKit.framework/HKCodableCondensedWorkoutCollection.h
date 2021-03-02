/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HKCodableCondensedWorkoutCollection : PBCodable <NSCopying> {

	NSMutableArray* _workouts;

}

@property (nonatomic,retain) NSMutableArray * workouts;              //@synthesize workouts=_workouts - In the implementation block
+(Class)workoutsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)workouts;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)addWorkouts:(id)arg1 ;
-(unsigned long long)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned long long)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end
