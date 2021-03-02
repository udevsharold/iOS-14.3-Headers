/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSError, NSUUID;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSDate* _lastUpdated;
	NSError* _error;
	long long _state;
	NSUUID* _commandIdentifier;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSUUID * commandIdentifier;              //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)state;
-(NSDate *)lastUpdated;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCommandIdentifier:(NSUUID *)arg1 ;
-(id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4 ;
-(NSUUID *)commandIdentifier;
-(void)setError:(NSError *)arg1 ;
-(NSString *)name;
-(id)debugDescription;
-(void)setState:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
