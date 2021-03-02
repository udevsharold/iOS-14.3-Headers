/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _ticket;
	NSString* _accountIdentifier;

}

@property (nonatomic,readonly) NSUUID * ticket;                           //@synthesize ticket=_ticket - In the implementation block
@property (nonatomic,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accountIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToQueryKeyTransparencyContext:(id)arg1 ;
-(id)initWithTicket:(id)arg1 accountIdentifier:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)ticket;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
