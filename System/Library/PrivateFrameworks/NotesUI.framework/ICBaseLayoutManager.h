/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class UITextView;

@interface ICBaseLayoutManager : NSLayoutManager {

	UITextView* _textView;

}

@property (assign,nonatomic,__weak) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
+(id)defaultLinkTextAttributes;
-(UITextView *)textView;
-(id)textContainer;
-(void)setTextView:(UITextView *)arg1 ;
-(void)drawBulletsForListRange:(NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(CGPoint)arg3 ;
-(double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1 ;
-(id)textController;
-(void)drawListStylesForCharacterRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
@end
