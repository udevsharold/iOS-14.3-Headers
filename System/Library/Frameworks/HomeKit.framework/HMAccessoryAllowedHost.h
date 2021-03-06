/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HMAccessoryAllowedHost : HMFObject <NSSecureCoding> {

	BOOL _unrestricted;
	NSString* _name;
	unsigned long long _purpose;
	NSSet* _addresses;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long purpose;                           //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSSet * addresses;                                    //@synthesize addresses=_addresses - In the implementation block
@property (getter=isUnrestricted,nonatomic,readonly) BOOL unrestricted;              //@synthesize unrestricted=_unrestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)purpose;
-(BOOL)isUnrestricted;
-(NSString *)address;
-(NSSet *)addresses;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end

