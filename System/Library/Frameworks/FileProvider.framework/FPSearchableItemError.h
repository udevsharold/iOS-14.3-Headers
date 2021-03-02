/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPSearchableItemError : PBCodable <NSCopying> {

	long long _code;
	NSString* _customDomain;
	int _domain;

}

@property (assign,nonatomic) int domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomDomain; 
@property (nonatomic,retain) NSString * customDomain;              //@synthesize customDomain=_customDomain - In the implementation block
+(id)stringFromError:(id)arg1 ;
+(id)errorFromString:(id)arg1 ;
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(int)domain;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCustomDomain:(NSString *)arg1 ;
-(NSString *)customDomain;
-(void)setDomain:(int)arg1 ;
-(int)StringAsDomain:(id)arg1 ;
-(BOOL)hasCustomDomain;
-(void)writeTo:(id)arg1 ;
-(id)domainAsString:(int)arg1 ;
@end
