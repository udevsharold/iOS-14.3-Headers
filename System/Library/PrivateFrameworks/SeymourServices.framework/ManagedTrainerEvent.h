/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, ManagedCatalogWorkoutMetadata;

@interface ManagedTrainerEvent : NSManagedObject

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double leadDuration; 
@property (assign,nonatomic) double startTime; 
@property (copy,nonatomic) NSString * type; 
@property (retain,nonatomic) ManagedCatalogWorkoutMetadata * catalogWorkoutMetadata; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
