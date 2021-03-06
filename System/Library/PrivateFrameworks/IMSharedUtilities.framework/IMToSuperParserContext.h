/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSMutableAttributedString, NSString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned long long _underlineCount;
	unsigned long long _boldCount;
	unsigned long long _italicCount;
	unsigned long long _strikethroughCount;
	unsigned long long _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	long long _baseWritingDirection;

}

@property (nonatomic,copy) NSString * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) long long baseWritingDirection;                     //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(void)setForegroundColor:(NSString *)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)foregroundColor;
-(NSAttributedString *)body;
-(void)reset;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)resultsForLogging;
-(void)decrementBoldCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)incrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontFamily;
-(void)popFontSize;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)_initIvars;
-(void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_clearIvars;
-(void)_updateFontSize;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)_updateFontFamily;
-(void)popLink;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)popBackgroundColor;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(long long)baseWritingDirection;
-(id)name;
-(NSArray *)fileTransferGUIDs;
-(NSString *)backgroundColor;
-(void)pushLink:(id)arg1 ;
@end

