/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADConfiguration : PBCodable <NSCopying> {

	double _expirationDate;
	NSString* _baseUrl;
	NSString* _bundleId;
	int _requestType;
	BOOL _isTest;
	SCD_Struct_AD2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                     //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTest; 
@property (assign,nonatomic) BOOL isTest;                         //@synthesize isTest=_isTest - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseUrl; 
@property (nonatomic,retain) NSString * baseUrl;                  //@synthesize baseUrl=_baseUrl - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
-(BOOL)hasIsTest;
-(void)setIsTest:(BOOL)arg1 ;
-(int)requestType;
-(void)setHasIsTest:(BOOL)arg1 ;
-(BOOL)isTest;
-(BOOL)hasBundleId;
-(BOOL)hasExpirationDate;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRequestType;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)baseUrl;
-(unsigned long long)hash;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(double)expirationDate;
-(void)setBundleId:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasBaseUrl;
-(void)setExpirationDate:(double)arg1 ;
-(void)setBaseUrl:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)writeTo:(id)arg1 ;
@end

