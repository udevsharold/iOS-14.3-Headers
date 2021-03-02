/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSDictionary, NSSet;

@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) NSDictionary * attributes;                                               //@synthesize attributes=_attributes - In the implementation block
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long priority; 
@property (getter=isTransient,readonly) BOOL transient; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> deviceIdentifier; 
@property (copy,readonly) NSSet * deviceDependencies; 
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> deviceBuilderIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)configurationWithIdentifier:(id)arg1 priority:(unsigned long long)arg2 deviceIdentifier:(id)arg3 deviceDependencies:(id)arg4 deviceBuilder:(id)arg5 ;
-(id<NSObject><NSCopying><NSSecureCoding>)deviceIdentifier;
-(BOOL)isTransient;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)description;
-(id)valueForAttribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)redactedDescription;
-(unsigned long long)priority;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)deviceBuilderIdentifier;
-(NSSet *)deviceDependencies;
-(id)_initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
@end
