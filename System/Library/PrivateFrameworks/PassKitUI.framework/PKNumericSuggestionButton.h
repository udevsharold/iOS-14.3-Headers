/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKNumericBorderButton.h>

@class UIColor, PKNumericSuggestion;

@interface PKNumericSuggestionButton : PKNumericBorderButton {

	UIColor* _textColor;
	PKNumericSuggestion* _suggestion;

}

@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) PKNumericSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(id)buttonWithSuggestion:(id)arg1 ;
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setSuggestion:(PKNumericSuggestion *)arg1 ;
-(PKNumericSuggestion *)suggestion;
-(void)setHighlighted:(BOOL)arg1 ;
@end
