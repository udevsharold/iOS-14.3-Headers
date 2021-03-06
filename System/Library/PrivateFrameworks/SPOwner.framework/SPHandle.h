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

@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _destination;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * destination;              //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleWithPhoneNumber:(id)arg1 ;
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithString:(id)arg1 ;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 destination:(id)arg2 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

