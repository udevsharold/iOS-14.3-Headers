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

@class NSString, NSNumber, HDContributorReference;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying> {

	long long _syncProvenance;
	NSString* _productType;
	NSString* _systemBuild;
	NSString* _sourceVersion;
	NSString* _timeZoneName;
	NSNumber* _sourceID;
	NSNumber* _deviceID;
	HDContributorReference* _contributorReference;
	SCD_Struct_HD6 _operatingSystemVersion;

}

@property (assign,nonatomic) long long syncProvenance;                                   //@synthesize syncProvenance=_syncProvenance - In the implementation block
@property (nonatomic,copy) NSString * productType;                                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy) NSString * systemBuild;                                       //@synthesize systemBuild=_systemBuild - In the implementation block
@property (assign,nonatomic) SCD_Struct_HD6 operatingSystemVersion;                      //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                     //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,copy) NSString * timeZoneName;                                      //@synthesize timeZoneName=_timeZoneName - In the implementation block
@property (nonatomic,retain) NSNumber * sourceID;                                        //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) HDContributorReference * contributorReference;              //@synthesize contributorReference=_contributorReference - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(SCD_Struct_HD6)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8 contributorReference:(id)arg9 ;
-(NSString *)productType;
-(void)setOperatingSystemVersion:(SCD_Struct_HD6)arg1 ;
-(SCD_Struct_HD6)operatingSystemVersion;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(NSNumber *)sourceID;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setSourceID:(NSNumber *)arg1 ;
-(NSString *)timeZoneName;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sourceVersion;
-(id)description;
-(NSNumber *)deviceID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSystemBuild:(NSString *)arg1 ;
-(NSString *)systemBuild;
-(long long)syncProvenance;
-(HDContributorReference *)contributorReference;
-(void)setSyncProvenance:(long long)arg1 ;
-(void)setContributorReference:(HDContributorReference *)arg1 ;
@end

