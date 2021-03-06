/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextRange.h>

@class NSArray;

@interface WKTextRange : UITextRange {

	CGRect _startRect;
	CGRect _endRect;
	BOOL _isNone;
	BOOL _isRange;
	BOOL _isEditable;
	NSArray* _selectionRects;
	unsigned long long _selectedTextLength;

}

@property (assign,nonatomic) CGRect startRect;                                   //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                     //@synthesize endRect=_endRect - In the implementation block
@property (assign,nonatomic) BOOL isNone;                                        //@synthesize isNone=_isNone - In the implementation block
@property (assign,nonatomic) BOOL isRange;                                       //@synthesize isRange=_isRange - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                    //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) unsigned long long selectedTextLength;              //@synthesize selectedTextLength=_selectedTextLength - In the implementation block
@property (nonatomic,copy) NSArray * selectionRects;                             //@synthesize selectionRects=_selectionRects - In the implementation block
+(id)textRangeWithState:(BOOL)arg1 isRange:(BOOL)arg2 isEditable:(BOOL)arg3 startRect:(CGRect)arg4 endRect:(CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned long long)arg7 ;
-(BOOL)isEditable;
-(void)setStartRect:(CGRect)arg1 ;
-(BOOL)isEmpty;
-(void)setSelectionRects:(NSArray *)arg1 ;
-(CGRect)startRect;
-(unsigned long long)selectedTextLength;
-(BOOL)_isRanged;
-(void)dealloc;
-(CGRect)endRect;
-(void)setIsNone:(BOOL)arg1 ;
-(id)description;
-(void)setIsEditable:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSelectedTextLength:(unsigned long long)arg1 ;
-(void)setIsRange:(BOOL)arg1 ;
-(NSArray *)selectionRects;
-(id)start;
-(id)end;
-(BOOL)isNone;
-(BOOL)_isCaret;
-(void)setEndRect:(CGRect)arg1 ;
-(BOOL)isRange;
@end

