/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {

	double _t0;
	float _values[8];

}

@property (nonatomic,readonly) float lastMinute; 
@property (nonatomic,readonly) float lastHour; 
@property (nonatomic,readonly) float lastDay; 
+(BOOL)supportsSecureCoding;
-(void)clear;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(float)lastDay;
-(float)lastHour;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateForTime:(double)arg1 ;
-(float)availableBudgetWithDefaults:(id)arg1 ;
-(double)nextDateWithBudgetWithDefaults:(id)arg1 ;
-(id)debugDescriptionWithDefaults:(id)arg1 ;
-(double)_timeToLoseAmount:(float)arg1 count:(int)arg2 ;
-(float)lastMinute;
-(void)consume:(float)arg1 ;
@end
