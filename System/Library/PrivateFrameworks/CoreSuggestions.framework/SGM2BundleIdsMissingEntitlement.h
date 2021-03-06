/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2BundleIdsMissingEntitlement : PBCodable <NSCopying> {

	NSString* _bundleId;
	NSString* _entitlement;
	NSString* _key;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasEntitlement; 
@property (nonatomic,retain) NSString * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
-(void)setEntitlement:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)hasBundleId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(NSString *)entitlement;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBundleId:(NSString *)arg1 ;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasEntitlement;
-(NSString *)bundleId;
-(void)writeTo:(id)arg1 ;
@end

