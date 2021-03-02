/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HKProfileIdentifier;

@interface HKHealthStoreIdentifier : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) HKProfileIdentifier * profileIdentifier; 
@property (getter=isPrimaryStoreIdentifier,readonly) BOOL primaryStoreIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)primaryStoreIdentifier;
+(id)identifierFromProfileIdentifier:(id)arg1 ;
-(BOOL)isPrimaryStoreIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKProfileIdentifier *)profileIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initPrimaryStoreIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
