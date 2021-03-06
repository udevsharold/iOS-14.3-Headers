/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BCSBusinessLinkContent : PBCodable <NSCopying> {

	NSString* _language;
	NSString* _subtitle;
	NSString* _title;
	BOOL _isDefault;
	SCD_Struct_BC1 _has;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIsDefault; 
@property (assign,nonatomic) BOOL isDefault;                   //@synthesize isDefault=_isDefault - In the implementation block
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(NSString *)subtitle;
-(BOOL)hasSubtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)language;
-(id)description;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isDefault;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
@end

