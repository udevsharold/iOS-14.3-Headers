/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface HAENGeoLocation : NSObject {

	unsigned source;
	unsigned sourceDevice;
	NSString* countryCode;
	NSDate* timestamp;

}

@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) unsigned source; 
@property (nonatomic,readonly) unsigned sourceDevice; 
@property (nonatomic,readonly) NSDate * timestamp; 
-(NSDate *)timestamp;
-(id)init;
-(NSString *)countryCode;
-(id)description;
-(unsigned)sourceDevice;
-(unsigned)source;
-(void)fetchGeoLocation;
-(id)describeSource;
@end

