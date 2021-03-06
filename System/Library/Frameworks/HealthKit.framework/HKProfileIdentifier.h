/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface HKProfileIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;

}

@property (copy,readonly) NSUUID * identifier; 
@property (readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)_profileWithUUID:(id)arg1 type:(long long)arg2 ;
+(id)primaryProfile;
+(BOOL)isValidProfileType:(long long)arg1 ;
+(BOOL)isValidSecondaryProfileType:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(long long)type;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

