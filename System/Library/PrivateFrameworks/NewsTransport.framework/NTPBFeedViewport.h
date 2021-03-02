/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable <NSCopying> {

	unsigned long long _feedDBVersion;
	unsigned long long _version;
	NSMutableArray* _elements;
	NSString* _identifier;
	NSMutableArray* _sharedStrings;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasFeedDBVersion; 
@property (assign,nonatomic) unsigned long long feedDBVersion;              //@synthesize feedDBVersion=_feedDBVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSMutableArray * sharedStrings;                //@synthesize sharedStrings=_sharedStrings - In the implementation block
+(Class)elementsType;
+(Class)sharedStringsType;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(void)addSharedStrings:(id)arg1 ;
-(void)setHasFeedDBVersion:(BOOL)arg1 ;
-(BOOL)hasFeedDBVersion;
-(void)clearElements;
-(unsigned long long)elementsCount;
-(id)elementsAtIndex:(unsigned long long)arg1 ;
-(void)clearSharedStrings;
-(unsigned long long)sharedStringsCount;
-(id)sharedStringsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)sharedStrings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasVersion;
-(NSString *)identifier;
-(NSMutableArray *)elements;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setElements:(NSMutableArray *)arg1 ;
-(unsigned long long)feedDBVersion;
-(void)setFeedDBVersion:(unsigned long long)arg1 ;
-(void)addElements:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSharedStrings:(NSMutableArray *)arg1 ;
@end
