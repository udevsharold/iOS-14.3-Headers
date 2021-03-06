/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXLangMap, NSString, NSLocale, NSCharacterSet, AXLanguageManager;

@interface AXDialectMap : NSObject {

	AXLangMap* _langMap;
	NSString* _voiceName;
	NSLocale* _locale;
	NSString* _specificLanguageID;
	NSCharacterSet* _speakableCharacters;
	NSCharacterSet* _secondaryLanguageRange;

}

@property (assign,nonatomic,__weak) AXLangMap * langMap;                                     //@synthesize langMap=_langMap - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                              //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                                             //@synthesize voiceName=_voiceName - In the implementation block
@property (nonatomic,retain) NSCharacterSet * speakableCharacters;                           //@synthesize speakableCharacters=_speakableCharacters - In the implementation block
@property (nonatomic,copy) NSString * specificLanguageID;                                    //@synthesize specificLanguageID=_specificLanguageID - In the implementation block
@property (nonatomic,readonly) AXLanguageManager * langManager; 
@property (nonatomic,retain) NSCharacterSet * secondaryLanguageRange;                        //@synthesize secondaryLanguageRange=_secondaryLanguageRange - In the implementation block
@property (nonatomic,readonly) NSString * languageNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameInNativeLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInCurrentLocale; 
@property (nonatomic,readonly) NSString * localeNameInCurrentLocale; 
@property (nonatomic,readonly) NSString * languageNameAndLocaleInNativeLocale; 
@property (nonatomic,readonly) NSString * regionID; 
+(id)_hanjaCharacterSet;
+(id)_hanjaToHangulMap;
-(NSLocale *)locale;
-(NSString *)localeNameInCurrentLocale;
-(void)setLocale:(NSLocale *)arg1 ;
-(AXLangMap *)langMap;
-(id)description;
-(NSString *)regionID;
-(NSString *)specificLanguageID;
-(id)basicDescription;
-(void)setVoiceName:(NSString *)arg1 ;
-(void)setSpeakableCharacters:(NSCharacterSet *)arg1 ;
-(void)setSecondaryLanguageRange:(NSCharacterSet *)arg1 ;
-(void)setSpecificLanguageID:(NSString *)arg1 ;
-(NSString *)voiceName;
-(AXLanguageManager *)langManager;
-(NSCharacterSet *)secondaryLanguageRange;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 allowTransliteration:(BOOL)arg2 ;
-(BOOL)canSpeakString:(id)arg1 ;
-(NSCharacterSet *)speakableCharacters;
-(BOOL)speakingRequiresTransliteration;
-(id)_transliteratedSpeechCharacters;
-(BOOL)canSpeakString:(id)arg1 allowsTransliteration:(BOOL)arg2 ;
-(BOOL)_languageIsKorean;
-(id)_stringByTransliterationHanjaToHangul:(id)arg1 ;
-(id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5 ;
-(NSString *)languageNameInCurrentLocale;
-(NSString *)languageNameInNativeLocale;
-(BOOL)canSpeakCharacter:(unsigned short)arg1 ;
-(NSString *)languageNameAndLocaleInCurrentLocale;
-(NSString *)languageNameAndLocaleInNativeLocale;
-(BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1 ;
-(BOOL)canSpeakLongCharacter:(unsigned)arg1 ;
-(id)transliteratedStringForString:(id)arg1 ;
-(void)setLangMap:(AXLangMap *)arg1 ;
-(id)debugDescription;
@end

