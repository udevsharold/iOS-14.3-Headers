/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiFoundation/EmojiFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, EMFEmojiLocaleData;

@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {

	EmojiTokenWrapperRef _emojiTokenRef;
	BOOL _didFailCEM;
	NSString* _localeIdentifier;
	NSString* _string;

}

@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * _baseString; 
@property (nonatomic,copy,readonly) NSArray * _skinToneVariantStrings; 
@property (nonatomic,readonly) BOOL _shouldHighlightEmoji; 
@property (nonatomic,readonly) const EmojiTokenWrapperRef emojiTokenRef;              //@synthesize emojiTokenRef=_emojiTokenRef - In the implementation block
@property (nonatomic,readonly) EMFEmojiLocaleData * localeData; 
@property (nonatomic,readonly) BOOL supportsSkinToneVariants; 
@property (nonatomic,readonly) int skinTone; 
@property (nonatomic,readonly) NSArray * skinToneSpecifiers; 
@property (nonatomic,readonly) NSArray * skinToneChooserVariants; 
@property (nonatomic,copy,readonly) NSArray * skinToneVariants; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) BOOL isCommon; 
+(BOOL)supportsSecureCoding;
+(id)emojiTokenWithString:(id)arg1 localeData:(id)arg2 ;
+(id)emojiTokensForCEMEmojiTokens:(CFArrayRef)arg1 ;
+(id)emojiTokenWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
+(id)emojiTokenWithLongCharacter:(unsigned)arg1 localeData:(id)arg2 ;
-(NSString *)localeIdentifier;
-(void)setString:(NSString *)arg1 ;
-(NSString *)string;
-(int)presentationStyle;
-(NSString *)_baseString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsSkinToneVariants;
-(NSArray *)_skinToneVariantStrings;
-(id)description;
-(BOOL)_shouldHighlightEmoji;
-(EMFEmojiLocaleData *)localeData;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)skinToneVariants;
-(id)copyWithSkinToneVariant:(int)arg1 ;
-(id)copyWithSkinToneVariantSpecifier:(id)arg1 ;
-(int)skinTone;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualIgnoringModifiers:(id)arg1 ;
-(id)copyWithoutModifiers;
-(id)initWithCEMEmojiToken:(EmojiTokenWrapperRef)arg1 ;
-(id)initWithString:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)_createEmojiTokenRefIfNecessary;
-(const EmojiTokenWrapperRef)emojiTokenRef;
-(NSArray *)skinToneSpecifiers;
-(NSArray *)skinToneChooserVariants;
-(BOOL)supportsPresentationStyle:(int)arg1 ;
-(id)copyWithPresentationStyle:(int)arg1 ;
-(BOOL)isCommon;
-(id)relatedEmojiTokens:(unsigned long long)arg1 ;
-(id)nameForType:(int)arg1 ;
@end
