/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/FCReorderableTagSubscription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NTPBDate;

@interface NTPBAudioPlaylistItem : PBCodable <FCKeyValueStoreCoding, FCReorderableTagSubscription, NSCopying> {

	long long _listOrder;
	NSString* _articleID;
	NTPBDate* _dateAdded;
	NSString* _identifier;
	SCD_Struct_NT3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * order; 
@property (nonatomic,copy,readonly) NSString * tagID; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                  //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasDateAdded; 
@property (nonatomic,retain) NTPBDate * dateAdded;                  //@synthesize dateAdded=_dateAdded - In the implementation block
@property (assign,nonatomic) BOOL hasListOrder; 
@property (assign,nonatomic) long long listOrder;                   //@synthesize listOrder=_listOrder - In the implementation block
+(id)identifierFromArticleID:(id)arg1 ;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(id)articleIDFromIdentifier:(id)arg1 ;
+(int)keyValuePairType;
-(NSNumber *)order;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)initWithCKRecord:(id)arg1 ;
-(id)copyWithOrder:(id)arg1 ;
-(NSString *)tagID;
-(id)asCKRecord;
-(NTPBDate *)dateAdded;
-(BOOL)hasIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)articleID;
-(void)dealloc;
-(BOOL)readFrom:(id)arg1 ;
-(long long)listOrder;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDateAdded;
-(BOOL)hasListOrder;
-(NSString *)identifier;
-(NSString *)description;
-(void)setListOrder:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasListOrder:(BOOL)arg1 ;
-(BOOL)hasArticleID;
-(void)writeTo:(id)arg1 ;
-(void)setDateAdded:(NTPBDate *)arg1 ;
@end

