/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBVersionedPersonalizationVector : PBCodable <NSCopying> {

	NSData* _bundleSubscribedVector;
	NSString* _bundleSubscribedVectorVersion;
	NSData* _personalizationVector;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasPersonalizationVector; 
@property (nonatomic,retain) NSData * personalizationVector;                        //@synthesize personalizationVector=_personalizationVector - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleSubscribedVector; 
@property (nonatomic,retain) NSData * bundleSubscribedVector;                       //@synthesize bundleSubscribedVector=_bundleSubscribedVector - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleSubscribedVectorVersion; 
@property (nonatomic,retain) NSString * bundleSubscribedVectorVersion;              //@synthesize bundleSubscribedVectorVersion=_bundleSubscribedVectorVersion - In the implementation block
-(NSString *)bundleSubscribedVectorVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBundleSubscribedVectorVersion:(NSString *)arg1 ;
-(NSData *)personalizationVector;
-(void)setPersonalizationVector:(NSData *)arg1 ;
-(BOOL)hasBundleSubscribedVector;
-(unsigned long long)hash;
-(BOOL)hasPersonalizationVector;
-(BOOL)hasVersion;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasBundleSubscribedVectorVersion;
-(NSString *)version;
-(void)setBundleSubscribedVector:(NSData *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSData *)bundleSubscribedVector;
-(void)writeTo:(id)arg1 ;
@end
