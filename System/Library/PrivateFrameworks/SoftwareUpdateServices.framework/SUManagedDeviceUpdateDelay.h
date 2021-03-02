/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDelayed;
	NSDate* _delayedStartDate;
	unsigned long long _delayPeriod;

}

@property (assign,nonatomic) BOOL isDelayed;                              //@synthesize isDelayed=_isDelayed - In the implementation block
@property (nonatomic,retain) NSDate * delayedStartDate;                   //@synthesize delayedStartDate=_delayedStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long delayPeriod;              //@synthesize delayPeriod=_delayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)delayPeriod;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDelay:(id)arg1 ;
-(BOOL)isDelayed;
-(void)setIsDelayed:(BOOL)arg1 ;
-(void)setDelayPeriod:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)delayedStartDate;
-(unsigned long long)delayUnit;
-(id)delayEndDate;
-(void)setDelayedStartDate:(NSDate *)arg1 ;
@end
