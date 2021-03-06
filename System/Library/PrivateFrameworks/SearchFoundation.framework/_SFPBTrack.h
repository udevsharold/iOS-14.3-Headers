/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTrack.h>
@class NSString, _SFPBURL, _SFPBActionItem, NSData;


@protocol _SFPBTrack <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * duration; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) _SFPBURL * preview; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)highlighted;
-(NSData *)jsonData;
-(_SFPBURL *)preview;
-(_SFPBActionItem *)playAction;
-(void)setNumber:(id)arg1;
-(NSString *)number;
-(void)setDuration:(id)arg1;
-(void)setPreview:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setPlayAction:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)duration;
-(void)setHighlighted:(BOOL)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBURL, _SFPBActionItem, NSData;

@interface _SFPBTrack : PBCodable <_SFPBTrack, NSSecureCoding> {

	BOOL _highlighted;
	NSString* _title;
	NSString* _number;
	NSString* _duration;
	_SFPBURL* _preview;
	_SFPBActionItem* _playAction;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * number;                           //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) _SFPBURL * preview;                        //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)highlighted;
-(NSData *)jsonData;
-(_SFPBURL *)preview;
-(_SFPBActionItem *)playAction;
-(void)setNumber:(NSString *)arg1 ;
-(NSString *)number;
-(void)setDuration:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPreview:(_SFPBURL *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)duration;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
-(id)initWithFacade:(id)arg1 ;
@end

