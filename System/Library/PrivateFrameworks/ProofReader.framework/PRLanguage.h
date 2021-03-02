/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PRLanguage : NSObject {

	NSString* _identifier;
	NSString* _localization;
	NSString* _fallbackLocalization;
	unsigned long long _orthoIndex;
	unsigned _encoding;
	unsigned char _languageCode;
	unsigned char _languageDialect;
	unsigned char _languageMode;

}
+(id)supportedLanguages;
+(unsigned)encodingForOrthographyIndex:(unsigned long long)arg1 ;
+(id)supportedEnglishLocalizationAdditions;
+(unsigned long long)orthographyIndexForForOtherLanguage:(id)arg1 ;
+(id)supportedAssetLexiconLanguages;
+(id)languageModelFallbackLocalizationForLanguage:(id)arg1 ;
+(id)localizationsForLanguage:(id)arg1 ;
+(id)fallbackLocalizationForLanguage:(id)arg1 ;
+(id)transliterationLocalizationForLanguage:(id)arg1 ;
+(id)supportedNonLatinLanguages;
+(unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1 ;
+(id)englishLocalizationAdditionForLanguage:(id)arg1 ;
+(id)supportedCyrillicLanguages;
+(id)dataBundle;
+(id)languageWithIdentifier:(id)arg1 ;
+(id)languageModelLocalizationForLanguage:(id)arg1 ;
+(id)supportedTransliterationLanguages;
+(id)supportedAssetLanguages;
+(id)localizationForLanguage:(id)arg1 ;
+(id)supportedLatinLanguages;
+(id)supportedLocalizations;
+(id)textInputModeForLanguage:(id)arg1 ;
+(void)getCodesForLanguage:(id)arg1 languageCode:(char*)arg2 languageDialect:(char*)arg3 languageMode:(char*)arg4 orthographyIndex:(unsigned long long*)arg5 encoding:(unsigned*)arg6 ;
-(BOOL)isHebrew;
-(BOOL)isDutch;
-(unsigned char)languageCode;
-(BOOL)isFinnish;
-(BOOL)isBicameral;
-(BOOL)isHindi;
-(BOOL)isThai;
-(unsigned char)languageMode;
-(BOOL)isFrench;
-(BOOL)isBulgarian;
-(const char*)accents;
-(unsigned char)languageDialect;
-(BOOL)isCzech;
-(unsigned)encoding;
-(void)dealloc;
-(BOOL)isNorwegian;
-(const char*)oneLetterWords;
-(const char*)twoLetterWords;
-(BOOL)isTelugu;
-(BOOL)isTurkish;
-(BOOL)isKorean;
-(BOOL)isIndonesian;
-(BOOL)isPortuguese;
-(BOOL)isArabic;
-(BOOL)isPolish;
-(id)identifier;
-(BOOL)isNynorsk;
-(BOOL)isRomanian;
-(BOOL)isDanish;
-(BOOL)isHungarian;
-(BOOL)isSpanish;
-(BOOL)isIrishGaelic;
-(BOOL)isPunjabi;
-(BOOL)isSwedish;
-(BOOL)isVietnamese;
-(BOOL)isRussian;
-(id)fallbackLocalization;
-(BOOL)isEnglish;
-(BOOL)isUkrainian;
-(BOOL)isItalian;
-(BOOL)isGreek;
-(BOOL)isGerman;
-(id)initWithIdentifier:(id)arg1 ;
-(id)localization;
-(unsigned long long)orthographyIndex;
@end
