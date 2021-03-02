/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface HMDAccessoryFirmwareUpdatePolicyCharacteristicConfiguration : NSObject {

	NSString* _type;
	NSString* _format;
	NSArray* _values;
	NSNumber* _settlingTime;

}

@property (readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (readonly) NSString * format;                    //@synthesize format=_format - In the implementation block
@property (readonly) NSArray * values;                     //@synthesize values=_values - In the implementation block
@property (readonly) NSNumber * settlingTime;              //@synthesize settlingTime=_settlingTime - In the implementation block
-(NSArray *)values;
-(NSString *)format;
-(NSString *)type;
-(id)initWithType:(id)arg1 format:(id)arg2 values:(id)arg3 settlingTime:(id)arg4 ;
-(NSNumber *)settlingTime;
@end
