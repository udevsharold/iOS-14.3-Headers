/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface HFListFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _listStyle;
	UListFormatterRef _formatter;

}

@property (assign,nonatomic) UListFormatterRef formatter;               //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) unsigned long long listStyle;              //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(UListFormatterRef)formatter;
-(void)setListStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setFormatter:(UListFormatterRef)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)_invaildateFormatter;
-(unsigned long long)listStyle;
-(id)_formatOrListWithElements:(id)arg1 ;
-(id)_formatAndListWithElements:(id)arg1 ;
-(id)_formatSentenceListWithElements:(id)arg1 ;
@end

