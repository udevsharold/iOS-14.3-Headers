/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaOffer.h>
@class _SFPBActionItem, NSString, _SFPBImage, NSData;


@protocol _SFPBMediaOffer <NSObject>
@property (nonatomic,retain) _SFPBActionItem * actionItem; 
@property (nonatomic,copy) NSString * sublabel; 
@property (nonatomic,copy) NSString * offerIdentifier; 
@property (assign,nonatomic) BOOL isEnabled; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(void)setOfferIdentifier:(id)arg1;
-(NSString *)sublabel;
-(BOOL)isEnabled;
-(_SFPBActionItem *)actionItem;
-(void)setActionItem:(id)arg1;
-(_SFPBImage *)image;
-(void)setIsEnabled:(BOOL)arg1;
-(void)setImage:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setSublabel:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)offerIdentifier;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBActionItem, NSString, _SFPBImage, NSData;

@interface _SFPBMediaOffer : PBCodable <_SFPBMediaOffer, NSSecureCoding> {

	BOOL _isEnabled;
	_SFPBActionItem* _actionItem;
	NSString* _sublabel;
	NSString* _offerIdentifier;
	_SFPBImage* _image;

}

@property (nonatomic,retain) _SFPBActionItem * actionItem;              //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,copy) NSString * sublabel;                         //@synthesize sublabel=_sublabel - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;                  //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                            //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,retain) _SFPBImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(NSString *)sublabel;
-(BOOL)isEnabled;
-(_SFPBActionItem *)actionItem;
-(void)setActionItem:(_SFPBActionItem *)arg1 ;
-(_SFPBImage *)image;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setImage:(_SFPBImage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSublabel:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)offerIdentifier;
-(id)initWithFacade:(id)arg1 ;
@end

