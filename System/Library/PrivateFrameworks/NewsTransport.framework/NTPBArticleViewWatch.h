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

@class NSString;

@interface NTPBArticleViewWatch : PBCodable <NSCopying> {

	int _articleHostViewTypeWatch;
	NSString* _articleId;
	NSString* _articleViewingSessionIdWatch;
	NSString* _sourceChannelId;
	BOOL _didScroll;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasArticleHostViewTypeWatch; 
@property (assign,nonatomic) int articleHostViewTypeWatch;                         //@synthesize articleHostViewTypeWatch=_articleHostViewTypeWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionIdWatch; 
@property (nonatomic,retain) NSString * articleViewingSessionIdWatch;              //@synthesize articleViewingSessionIdWatch=_articleViewingSessionIdWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                 //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                           //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasDidScroll; 
@property (assign,nonatomic) BOOL didScroll;                                       //@synthesize didScroll=_didScroll - In the implementation block
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setArticleViewingSessionIdWatch:(NSString *)arg1 ;
-(int)articleHostViewTypeWatch;
-(void)setArticleHostViewTypeWatch:(int)arg1 ;
-(void)setHasArticleHostViewTypeWatch:(BOOL)arg1 ;
-(BOOL)hasArticleHostViewTypeWatch;
-(BOOL)didScroll;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasArticleViewingSessionIdWatch;
-(void)setDidScroll:(BOOL)arg1 ;
-(void)setHasDidScroll:(BOOL)arg1 ;
-(BOOL)hasDidScroll;
-(NSString *)articleViewingSessionIdWatch;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end

