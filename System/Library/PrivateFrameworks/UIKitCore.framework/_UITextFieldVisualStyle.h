/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)placeholderColor;
-(BOOL)textShouldUseVibrancy;
-(id)initWithStyleSubject:(id)arg1 ;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
-(id)defaultFocusedTextColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(void)handleTextVibrancy;
-(id)parentViewForTextContentView;
@end
