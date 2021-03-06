/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRemoteExecutionErrorEvent : PBCodable <NSCopying> {

	NSString* _destinationType;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationType; 
@property (nonatomic,retain) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)hasSource;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)errorCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)source;
-(BOOL)hasErrorCode;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasDestinationType;
-(NSString *)destinationType;
-(void)setSource:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
@end

