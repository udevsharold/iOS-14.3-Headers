/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/WebInspector-Structs.h>
#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startLine; 
@property (assign,nonatomic) int startColumn; 
@property (assign,nonatomic) int endLine; 
@property (assign,nonatomic) int endColumn; 
+(id)ik_newLineIndexSetForStyleMarkup:(id)arg1 ;
+(id)ik_cssSourceRangeForRange:(NSRange)arg1 withNewLineIndexSet:(id)arg2 ;
+(id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
+(id)ik_emptySourceRange;
-(NSRange)ik_rangeWithNewLineIndexSet:(id)arg1 ;
-(int)endLine;
-(int)startLine;
-(int)startColumn;
-(int)endColumn;
-(void)setStartLine:(int)arg1 ;
-(void)setStartColumn:(int)arg1 ;
-(void)setEndLine:(int)arg1 ;
-(void)setEndColumn:(int)arg1 ;
-(id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
@end

