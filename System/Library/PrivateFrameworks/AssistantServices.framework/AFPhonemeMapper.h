/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {

	NSString* _languageCode;
	NSDictionary* _phonemeMap;
	NSRegularExpression* _regex;

}
+(id)_mapForLanguageCode:(id)arg1 ;
+(id)_buildRegexMatchingSubstrings:(id)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)stringByReplacingPhonemesInString:(id)arg1 ;
@end

