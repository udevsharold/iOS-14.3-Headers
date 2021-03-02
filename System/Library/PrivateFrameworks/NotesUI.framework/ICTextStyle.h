/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSAttributedString;

@interface ICTextStyle : NSObject {

	unsigned _ttStyle;
	NSDictionary* _attributes;
	NSString* _name;

}

@property (retain) NSDictionary * attributes;                                         //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (assign) unsigned ttStyle;                                                  //@synthesize ttStyle=_ttStyle - In the implementation block
@property (nonatomic,readonly) NSString * icaxStyleDescription; 
@property (nonatomic,copy,readonly) NSAttributedString * attributedName; 
@property (readonly) BOOL isTextList; 
+(id)titleStyle;
+(id)dashStyle;
+(id)headingStyle;
+(id)subheadingStyle;
+(id)bodyStyle;
+(id)fixedWidthStyle;
+(id)bulletStyle;
+(id)numberedStyle;
+(unsigned)validatedNamedStyle:(unsigned)arg1 ;
+(id)defaultTextStyles;
+(id)icaxStyleDescriptionForNamedStyle:(unsigned)arg1 ;
+(unsigned)noteDefaultNamedStyle;
+(void)setNoteDefaultNamedStyle:(unsigned)arg1 ;
+(id)titleForNamedStyle:(unsigned)arg1 ;
+(id)settingsDescriptionForNamedStyle:(unsigned)arg1 ;
+(id)styleForNamedStyle:(unsigned)arg1 ;
+(void)setAutoListInsertionEnabled:(BOOL)arg1 ;
+(BOOL)autoListInsertionEnabled;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSAttributedString *)attributedName;
-(unsigned)ttStyle;
-(NSString *)name;
-(void)setTtStyle:(unsigned)arg1 ;
-(BOOL)isTextList;
-(NSString *)icaxStyleDescription;
@end
