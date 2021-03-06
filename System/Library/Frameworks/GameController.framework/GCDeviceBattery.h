/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCDeviceBattery : NSObject <NSSecureCoding> {

	float _batteryLevel;
	long long _batteryState;

}

@property (assign,nonatomic) float batteryLevel;                  //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long batteryState;              //@synthesize batteryState=_batteryState - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)batteryLevel;
-(void)_setBatteryLevel:(float)arg1 ;
-(void)_setBatteryState:(long long)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBatteryLevel:(float)arg1 ;
-(long long)batteryState;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLevel:(float)arg1 batteryState:(long long)arg2 ;
-(id)initWithLevel:(unsigned char)arg1 isCharging:(BOOL)arg2 ;
@end

