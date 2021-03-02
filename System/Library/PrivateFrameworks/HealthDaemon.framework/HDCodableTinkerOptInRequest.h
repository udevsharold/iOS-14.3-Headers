/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableTinkerOptInRequest : PBRequest <NSCopying> {

	NSString* _guardianDisplayName;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGuardianDisplayName; 
@property (nonatomic,retain) NSString * guardianDisplayName;              //@synthesize guardianDisplayName=_guardianDisplayName - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(NSString *)guardianDisplayName;
-(void)setGuardianDisplayName:(NSString *)arg1 ;
-(BOOL)hasGuardianDisplayName;
@end
