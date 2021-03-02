/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLanguageDetection : NSObject
+(BOOL)_userIsMultilingual;
+(id)detectLanguageFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(id)detectLanguageFromTextIfMultilingual:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 minimumCount:(unsigned long long)arg2 minimumAgreement:(double)arg3 ;
+(int)_languageIdForLanguageString:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(id)userLanguages;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 hints:(SCD_Struct_PA2*)arg4 hintsCount:(unsigned long long)arg5 ;
+(id)detectLanguageFromTextHeuristicallyWithLanguages:(id)arg1 languages:(id)arg2 defaultLanguage:(id)arg3 ;
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)languageStringForLanguageId:(int)arg1 ;
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(id)_dominantLanguageTagFromTextWithMaxLength:(id)arg1 maxLength:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
+(id)detectLanguageFromTextHeuristically:(id)arg1 ;
+(SCD_Struct_PA2*)_hintsForLanguageIds:(id)arg1 totalProbability:(float)arg2 ;
+(id)defaultLanguage;
+(id)userLanguagesWithKeyboardDefaults:(id)arg1 ;
@end
