/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDetailedRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, _SFPBFormattedText, _SFPBActionItem, _SFPBButton, NSData;


@protocol _SFPBDetailedRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,retain) _SFPBRichText * title; 
@property (nonatomic,retain) _SFPBFormattedText * secondaryTitle; 
@property (nonatomic,retain) _SFPBImage * secondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,retain) _SFPBRichText * footnote; 
@property (nonatomic,retain) _SFPBFormattedText * trailingTopText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingMiddleText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingBottomText; 
@property (nonatomic,retain) _SFPBActionItem * action; 
@property (nonatomic,retain) _SFPBButton * button; 
@property (assign,nonatomic) BOOL shouldUseCompactDisplay; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setBackgroundColor:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(NSData *)jsonData;
-(_SFPBImage *)thumbnail;
-(void)setType:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)addDescriptions:(id)arg1;
-(_SFPBImage *)secondaryTitleImage;
-(BOOL)preventThumbnailImageScaling;
-(BOOL)isSecondaryTitleDetached;
-(_SFPBFormattedText *)trailingTopText;
-(_SFPBFormattedText *)trailingMiddleText;
-(_SFPBFormattedText *)trailingBottomText;
-(void)clearDescriptions;
-(unsigned long long)descriptionsCount;
-(id)descriptionsAtIndex:(unsigned long long)arg1;
-(void)setThumbnail:(id)arg1;
-(int)separatorStyle;
-(void)setAction:(id)arg1;
-(_SFPBButton *)button;
-(NSString *)type;
-(id)initWithJSON:(id)arg1;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(_SFPBFormattedText *)secondaryTitle;
-(void)setShouldUseCompactDisplay:(BOOL)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSArray *)descriptions;
-(NSArray *)punchoutOptions;
-(void)setHasTopPadding:(BOOL)arg1;
-(void)setTrailingTopText:(id)arg1;
-(_SFPBRichText *)footnote;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(void)setButton:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(_SFPBActionItem *)action;
-(void)setDescriptions:(id)arg1;
-(void)setFootnote:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(_SFPBRichText *)title;
-(void)setSecondaryTitle:(id)arg1;
-(BOOL)canBeHidden;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(BOOL)shouldUseCompactDisplay;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, _SFPBFormattedText, _SFPBActionItem, _SFPBButton, NSData;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	BOOL _shouldUseCompactDisplay;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBImage* _thumbnail;
	_SFPBRichText* _title;
	_SFPBFormattedText* _secondaryTitle;
	_SFPBImage* _secondaryTitleImage;
	NSArray* _descriptions;
	_SFPBRichText* _footnote;
	_SFPBFormattedText* _trailingTopText;
	_SFPBFormattedText* _trailingMiddleText;
	_SFPBFormattedText* _trailingBottomText;
	_SFPBActionItem* _action;
	_SFPBButton* _button;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                              //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                         //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                   //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                     //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                   //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                   //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                    //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,retain) _SFPBRichText * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBFormattedText * secondaryTitle;                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,retain) _SFPBImage * secondaryTitleImage;                     //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                        //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (nonatomic,copy) NSArray * descriptions;                                 //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,retain) _SFPBRichText * footnote;                             //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) _SFPBFormattedText * trailingTopText;                 //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (nonatomic,retain) _SFPBFormattedText * trailingMiddleText;              //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (nonatomic,retain) _SFPBFormattedText * trailingBottomText;              //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) _SFPBButton * button;                                 //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL shouldUseCompactDisplay;                         //@synthesize shouldUseCompactDisplay=_shouldUseCompactDisplay - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSData *)jsonData;
-(_SFPBImage *)thumbnail;
-(void)setType:(NSString *)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addDescriptions:(id)arg1 ;
-(_SFPBImage *)secondaryTitleImage;
-(BOOL)preventThumbnailImageScaling;
-(BOOL)isSecondaryTitleDetached;
-(_SFPBFormattedText *)trailingTopText;
-(_SFPBFormattedText *)trailingMiddleText;
-(_SFPBFormattedText *)trailingBottomText;
-(void)clearDescriptions;
-(unsigned long long)descriptionsCount;
-(id)descriptionsAtIndex:(unsigned long long)arg1 ;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)separatorStyle;
-(unsigned long long)hash;
-(void)setAction:(_SFPBActionItem *)arg1 ;
-(_SFPBButton *)button;
-(NSString *)type;
-(id)initWithJSON:(id)arg1 ;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(_SFPBImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBFormattedText *)secondaryTitle;
-(void)setShouldUseCompactDisplay:(BOOL)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSArray *)descriptions;
-(NSArray *)punchoutOptions;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(void)setTrailingTopText:(_SFPBFormattedText *)arg1 ;
-(_SFPBRichText *)footnote;
-(void)setTrailingMiddleText:(_SFPBFormattedText *)arg1 ;
-(void)setTrailingBottomText:(_SFPBFormattedText *)arg1 ;
-(void)setButton:(_SFPBButton *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTitle:(_SFPBRichText *)arg1 ;
-(_SFPBActionItem *)action;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setFootnote:(_SFPBRichText *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)writeTo:(id)arg1 ;
-(_SFPBRichText *)title;
-(void)setSecondaryTitle:(_SFPBFormattedText *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)canBeHidden;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)shouldUseCompactDisplay;
@end
