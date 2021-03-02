/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaItem.h>
@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;


@protocol _SFPBMediaItem <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBText * subtitleText; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,retain) _SFPBImage * reviewGlyph; 
@property (nonatomic,retain) _SFPBImage * overlayImage; 
@property (nonatomic,copy) NSString * reviewText; 
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings; 
@property (nonatomic,copy) NSArray * buyOptions; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBImage *)overlayImage;
-(void)setOverlayImage:(id)arg1;
-(NSString *)contentAdvisory;
-(NSData *)jsonData;
-(_SFPBText *)subtitleText;
-(_SFPBImage *)reviewGlyph;
-(NSString *)reviewText;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)addSubtitleCustomLineBreaking:(id)arg1;
-(void)addBuyOptions:(id)arg1;
-(NSArray *)subtitleCustomLineBreakings;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1;
-(void)setSubtitleCustomLineBreakings:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setPunchout:(id)arg1;
-(_SFPBPunchout *)punchout;
-(void)setReviewText:(id)arg1;
-(void)setSubtitleText:(id)arg1;
-(void)setReviewGlyph:(id)arg1;
-(void)setContentAdvisory:(id)arg1;
-(void)setBuyOptions:(id)arg1;
-(void)setContentAdvisoryImage:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding> {

	NSString* _title;
	_SFPBText* _subtitleText;
	_SFPBImage* _thumbnail;
	_SFPBImage* _reviewGlyph;
	_SFPBImage* _overlayImage;
	NSString* _reviewText;
	_SFPBPunchout* _punchout;
	NSArray* _subtitleCustomLineBreakings;
	NSArray* _buyOptions;
	NSString* _contentAdvisory;
	_SFPBImage* _contentAdvisoryImage;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBText * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _SFPBImage * reviewGlyph;                         //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,retain) _SFPBImage * overlayImage;                        //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                              //@synthesize reviewText=_reviewText - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * punchout;                         //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings;              //@synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings - In the implementation block
@property (nonatomic,copy) NSArray * buyOptions;                               //@synthesize buyOptions=_buyOptions - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                         //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage;                //@synthesize contentAdvisoryImage=_contentAdvisoryImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_SFPBImage *)overlayImage;
-(void)setOverlayImage:(_SFPBImage *)arg1 ;
-(NSString *)contentAdvisory;
-(NSData *)jsonData;
-(_SFPBText *)subtitleText;
-(_SFPBImage *)reviewGlyph;
-(NSString *)reviewText;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(void)addSubtitleCustomLineBreaking:(id)arg1 ;
-(void)addBuyOptions:(id)arg1 ;
-(NSArray *)subtitleCustomLineBreakings;
-(BOOL)readFrom:(id)arg1 ;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1 ;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitleCustomLineBreakings:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(_SFPBPunchout *)punchout;
-(void)setReviewText:(NSString *)arg1 ;
-(void)setSubtitleText:(_SFPBText *)arg1 ;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setSubtitleCustomLineBreaking:(id)arg1 ;
-(void)setBuyOptions:(NSArray *)arg1 ;
-(void)setContentAdvisoryImage:(_SFPBImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)title;
-(id)initWithFacade:(id)arg1 ;
@end
