/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSArray;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _enabled;
	unsigned long long _options;
	NSSet* _accessories;

}

@property (getter=isEnabled,readonly) BOOL enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) BOOL allowUnauthenticatedRequests; 
@property (copy,readonly) NSArray * accessories; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAccessorySupported:(id)arg1 ;
+(id)shortDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEnabled;
-(id)initWithUser:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)accessories;
-(BOOL)allowUnauthenticatedRequests;
-(id)debugDescription;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
@end

