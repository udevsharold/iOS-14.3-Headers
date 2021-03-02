/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {

	NSString* fManufacturerName;
	NSString* fModel;

}

@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) NSString * model; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)fitnessMachineWorkoutInstance:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4 ;
-(NSString *)manufacturerName;
-(void)encodeWithCoder:(id)arg1 ;
@end
