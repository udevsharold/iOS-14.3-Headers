/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface EKUITextAndHeaderItem : NSObject {

	NSString* _text;
	NSString* _header;
	long long _lines;

}

@property (nonatomic,retain) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * header;                                      //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) long long lines;                                        //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)itemWithText:(id)arg1 andHeader:(id)arg2 ;
-(void)setHeader:(NSString *)arg1 ;
-(long long)lines;
-(NSString *)header;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(void)setLines:(long long)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
@end
