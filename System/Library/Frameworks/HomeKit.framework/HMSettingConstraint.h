/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSUUID;

@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	long long _type;
	id<NSCopying><NSSecureCoding> _value;

}

@property (readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (copy,readonly) id<NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)supportedValueClasses;
+(id)shortDescription;
-(id<NSCopying><NSSecureCoding>)value;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

