/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMSwimWorkout : CMWorkout {

	long long fLocation;
	double fPoolLength;

}

@property (nonatomic,readonly) long long location; 
@property (nonatomic,readonly) double poolLength; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)swimLocationName:(long long)arg1 ;
+(id)swimWorkoutInstance:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)location;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(double)poolLength;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3 ;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
