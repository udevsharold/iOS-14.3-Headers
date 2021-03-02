/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFMediaRemoteControlCardSection.h>
@class NSArray, NSString, SFColor, NSDictionary, NSData;


@protocol SFMediaRemoteControlCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * playbackRouteUniqueIdentifier; 
@property (assign,nonatomic) BOOL playbackRouteUniqueIdentifierIsEncrypted; 
@property (nonatomic,copy) NSString * playbackBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setBackgroundColor:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(NSData *)jsonData;
-(void)setType:(id)arg1;
-(void)setPlaybackRouteUniqueIdentifier:(id)arg1;
-(void)setPlaybackRouteUniqueIdentifierIsEncrypted:(BOOL)arg1;
-(void)setPlaybackBundleIdentifier:(id)arg1;
-(NSString *)playbackRouteUniqueIdentifier;
-(BOOL)playbackRouteUniqueIdentifierIsEncrypted;
-(NSString *)playbackBundleIdentifier;
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

@class NSArray, NSString, SFColor, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFMediaRemoteControlCardSection : SFCardSection <SFMediaRemoteControlCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _playbackRouteUniqueIdentifierIsEncrypted;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _playbackRouteUniqueIdentifier;
	NSString* _playbackBundleIdentifier;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                    //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                               //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                         //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                           //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                         //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                      //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                         //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * playbackRouteUniqueIdentifier;                     //@synthesize playbackRouteUniqueIdentifier=_playbackRouteUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL playbackRouteUniqueIdentifierIsEncrypted;              //@synthesize playbackRouteUniqueIdentifierIsEncrypted=_playbackRouteUniqueIdentifierIsEncrypted - In the implementation block
@property (nonatomic,copy) NSString * playbackBundleIdentifier;                          //@synthesize playbackBundleIdentifier=_playbackBundleIdentifier - In the implementation block
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setPlaybackRouteUniqueIdentifier:(NSString *)arg1 ;
-(void)setPlaybackRouteUniqueIdentifierIsEncrypted:(BOOL)arg1 ;
-(void)setPlaybackBundleIdentifier:(NSString *)arg1 ;
-(NSString *)playbackRouteUniqueIdentifier;
-(BOOL)playbackRouteUniqueIdentifierIsEncrypted;
-(NSString *)playbackBundleIdentifier;
-(int)separatorStyle;
-(BOOL)hasPlaybackRouteUniqueIdentifierIsEncrypted;
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
