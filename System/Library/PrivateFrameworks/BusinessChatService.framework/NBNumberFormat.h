/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BusinessChatService/BusinessChatService-Structs.h>
@class NSString, NSArray;

@interface NBNumberFormat : NSObject {

	BOOL _nationalPrefixOptionalWhenFormatting;
	NSString* _pattern;
	NSString* _format;
	NSArray* _leadingDigitsPatterns;
	NSString* _nationalPrefixFormattingRule;
	NSString* _domesticCarrierCodeFormattingRule;

}

@property (nonatomic,retain) NSString * pattern;                                        //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,retain) NSString * format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * leadingDigitsPatterns;                           //@synthesize leadingDigitsPatterns=_leadingDigitsPatterns - In the implementation block
@property (nonatomic,retain) NSString * nationalPrefixFormattingRule;                   //@synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule - In the implementation block
@property (assign,nonatomic) BOOL nationalPrefixOptionalWhenFormatting;                 //@synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting - In the implementation block
@property (nonatomic,retain) NSString * domesticCarrierCodeFormattingRule;              //@synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule - In the implementation block
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEntry:(id)arg1 ;
-(id)description;
-(NSString *)pattern;
-(void)setPattern:(NSString *)arg1 ;
-(NSString *)nationalPrefixFormattingRule;
-(BOOL)nationalPrefixOptionalWhenFormatting;
-(NSArray *)leadingDigitsPatterns;
-(void)setNationalPrefixFormattingRule:(NSString *)arg1 ;
-(NSString *)domesticCarrierCodeFormattingRule;
-(id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(BOOL)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6 ;
-(void)setLeadingDigitsPatterns:(NSArray *)arg1 ;
-(void)setNationalPrefixOptionalWhenFormatting:(BOOL)arg1 ;
-(void)setDomesticCarrierCodeFormattingRule:(NSString *)arg1 ;
@end

