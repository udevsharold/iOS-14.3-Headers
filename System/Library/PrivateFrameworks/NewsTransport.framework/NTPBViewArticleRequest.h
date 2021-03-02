/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBViewArticleRequest : PBRequest <NSCopying> {

	NSString* _feedUri;
	NSString* _storeFrontId;
	NSString* _webPageUri;

}

@property (nonatomic,readonly) BOOL hasWebPageUri; 
@property (nonatomic,retain) NSString * webPageUri;                //@synthesize webPageUri=_webPageUri - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUri; 
@property (nonatomic,retain) NSString * feedUri;                   //@synthesize feedUri=_feedUri - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontId; 
@property (nonatomic,retain) NSString * storeFrontId;              //@synthesize storeFrontId=_storeFrontId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)feedUri;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFeedUri:(NSString *)arg1 ;
-(BOOL)hasWebPageUri;
-(BOOL)hasFeedUri;
-(BOOL)hasStoreFrontId;
-(NSString *)webPageUri;
-(NSString *)storeFrontId;
-(void)setWebPageUri:(NSString *)arg1 ;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
