/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface DEValidationEntry : NSObject {

	NSString* _text;
	NSString* _textWithLineNumber;
	NSNumber* _lineNumber;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * textWithLineNumber;              //@synthesize textWithLineNumber=_textWithLineNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lineNumber;                      //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,retain) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
-(NSString *)filename;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)textWithLineNumber;
-(void)setTextWithLineNumber:(NSString *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(NSNumber *)lineNumber;
-(void)setLineNumber:(NSNumber *)arg1 ;
@end

