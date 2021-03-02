/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFAttributionFooterCardSection.h>
@class NSArray, NSString, SFColor, SFRichText, SFPunchout, NSDictionary, NSData;


@protocol SFAttributionFooterCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFRichText * leadingAttribution; 
@property (nonatomic,retain) SFPunchout * leadingAttributionPunchout; 
@property (nonatomic,retain) SFRichText * trailingAttribution; 
@property (nonatomic,retain) SFPunchout * trailingAttributionPunchout; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setBackgroundColor:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(NSData *)jsonData;
-(SFRichText *)leadingAttribution;
-(void)setLeadingAttribution:(id)arg1;
-(SFPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(id)arg1;
-(SFRichText *)trailingAttribution;
-(void)setTrailingAttribution:(id)arg1;
-(SFPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(id)arg1;
-(void)setType:(id)arg1;
-(int)separatorStyle;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSArray *)punchoutOptions;
-(void)setHasTopPadding:(BOOL)arg1;
-(SFColor *)backgroundColor;
-(BOOL)canBeHidden;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFRichText, SFPunchout, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFAttributionFooterCardSection : SFCardSection <SFAttributionFooterCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFRichText* _leadingAttribution;
	SFPunchout* _leadingAttributionPunchout;
	SFRichText* _trailingAttribution;
	SFPunchout* _trailingAttributionPunchout;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFRichText * leadingAttribution;                        //@synthesize leadingAttribution=_leadingAttribution - In the implementation block
@property (nonatomic,retain) SFPunchout * leadingAttributionPunchout;                //@synthesize leadingAttributionPunchout=_leadingAttributionPunchout - In the implementation block
@property (nonatomic,retain) SFRichText * trailingAttribution;                       //@synthesize trailingAttribution=_trailingAttribution - In the implementation block
@property (nonatomic,retain) SFPunchout * trailingAttributionPunchout;               //@synthesize trailingAttributionPunchout=_trailingAttributionPunchout - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSData *)jsonData;
-(SFRichText *)leadingAttribution;
-(void)setLeadingAttribution:(SFRichText *)arg1 ;
-(SFPunchout *)leadingAttributionPunchout;
-(void)setLeadingAttributionPunchout:(SFPunchout *)arg1 ;
-(SFRichText *)trailingAttribution;
-(void)setTrailingAttribution:(SFRichText *)arg1 ;
-(SFPunchout *)trailingAttributionPunchout;
-(void)setTrailingAttributionPunchout:(SFPunchout *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(int)separatorStyle;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSArray *)punchoutOptions;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(SFColor *)backgroundColor;
-(BOOL)canBeHidden;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
@end
