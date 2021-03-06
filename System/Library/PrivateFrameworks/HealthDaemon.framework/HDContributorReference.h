/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying> {

	long long _contributorType;
	NSNumber* _persistentID;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) long long contributorType;                 //@synthesize contributorType=_contributorType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * UUID;                        //@synthesize UUID=_UUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contributorReferenceForPersistentID:(id)arg1 ;
+(id)contributorReferenceForNoContributor;
+(id)contributorReferenceForOtherUserWithUUID:(id)arg1 ;
+(id)contributorReferenceForPrimaryUser;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)persistentID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)contributorType;
-(id)_initWithContributorType:(long long)arg1 persistentID:(id)arg2 uuid:(id)arg3 ;
@end

