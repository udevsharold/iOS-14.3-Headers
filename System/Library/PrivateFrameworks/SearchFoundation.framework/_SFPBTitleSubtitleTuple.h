/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTitleSubtitleTuple.h>
@class NSString, NSData;


@protocol _SFPBTitleSubtitleTuple <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBTitleSubtitleTuple : PBCodable <_SFPBTitleSubtitleTuple, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(NSString *)subtitle;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
-(id)initWithFacade:(id)arg1 ;
@end

