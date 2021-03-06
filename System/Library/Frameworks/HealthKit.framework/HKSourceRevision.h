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

@class HKSource, NSString;

@interface HKSourceRevision : NSObject <NSSecureCoding, NSCopying> {

	HKSource* _source;
	NSString* _version;
	NSString* _productType;
	SCD_Struct_HK3 _operatingSystemVersion;

}

@property (readonly) HKSource * source;                                  //@synthesize source=_source - In the implementation block
@property (readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSString * productType;                        //@synthesize productType=_productType - In the implementation block
@property (readonly) SCD_Struct_HK3 operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productType;
-(SCD_Struct_HK3)operatingSystemVersion;
-(id)init;
-(id)initWithSource:(id)arg1 version:(id)arg2 ;
-(id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(SCD_Struct_HK3)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithSource:(id)arg1 ;
-(id)description;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)version;
-(HKSource *)source;
-(void)_setVersion:(id)arg1 ;
-(void)_setSource:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

