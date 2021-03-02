/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, ManagedHealthKitWorkout;

@interface ManagedHealthKitSessionReference : NSManagedObject

@property (copy,nonatomic) NSString * sessionIdentifier; 
@property (copy,nonatomic) NSString * workoutIdentifier; 
@property (retain,nonatomic) ManagedHealthKitWorkout * workout; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
