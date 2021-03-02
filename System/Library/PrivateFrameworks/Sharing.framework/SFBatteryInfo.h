/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFBatteryInfo : NSObject <NSSecureCoding> {

	double _batteryLevel;
	long long _batteryState;
	long long _batteryType;

}

@property (assign,nonatomic) double batteryLevel;                 //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long batteryState;              //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,nonatomic) long long batteryType;               //@synthesize batteryType=_batteryType - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)batteryLevel;
-(long long)batteryType;
-(void)setBatteryState:(long long)arg1 ;
-(void)setBatteryType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setBatteryLevel:(double)arg1 ;
-(long long)batteryState;
-(void)encodeWithCoder:(id)arg1 ;
@end
