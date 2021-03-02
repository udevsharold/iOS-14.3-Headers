/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding> {

	NSString* _mac;
	long long _rssi;
	long long _channel;
	double _age;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * mac;                 //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) long long rssi;                 //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) double age;                     //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)age;
-(NSString *)mac;
-(id)init;
-(long long)rssi;
-(NSDate *)date;
-(long long)channel;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
