/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@interface SGLanguageDetection : NSObject
+(id)detectLanguageFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)detectLanguageFromText:(id)arg1 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(id)dominantLanguageTagFromLanguageTags:(id)arg1 ;
+(void)logMatchingForRange:(NSRange)arg1 lowercaseRange:(NSRange)arg2 text:(id)arg3 lowercaseText:(id)arg4 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 ;
+(id)languageTagsFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 ;
+(id)dominantLanguageTagFromText:(id)arg1 withMaxLength:(unsigned long long)arg2 withMaxTags:(unsigned long long)arg3 withMinimumCount:(unsigned long long)arg4 withMinimumAgreement:(double)arg5 ;
+(id)languageForLocaleIdentifier:(id)arg1 ;
+(id)detectLanguageFromLanguageTags:(id)arg1 withMinimumCount:(unsigned long long)arg2 withMinimumAgreement:(double)arg3 ;
+(NSRange)tokenRangeForText:(id)arg1 maxTruncatedLength:(unsigned long long)arg2 tagger:(id)arg3 taggerOptions:(unsigned long long)arg4 prevTextTokenMaxRange:(unsigned long long)arg5 originalLengthShortfall:(unsigned long long)arg6 lowercaseText:(id)arg7 lowercaseRange:(NSRange)arg8 ;
+(id)dominantLanguageTagFromText:(id)arg1 ;
+(id)defaultLanguage;
@end

