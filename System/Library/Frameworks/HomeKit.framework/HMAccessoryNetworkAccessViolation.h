/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding> {

	NSDate* _lastViolationDate;
	NSDate* _lastResetDate;

}

@property (getter=hasCurrentViolation,readonly) BOOL currentViolation; 
@property (readonly) NSDate * lastViolationDate;                                    //@synthesize lastViolationDate=_lastViolationDate - In the implementation block
@property (readonly) NSDate * lastResetDate;                                        //@synthesize lastResetDate=_lastResetDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)lastViolationDate;
-(NSDate *)lastResetDate;
-(id)initWithLastViolationDate:(id)arg1 lastViolationResetDate:(id)arg2 ;
-(BOOL)hasCurrentViolation;
-(void)encodeWithCoder:(id)arg1 ;
@end

