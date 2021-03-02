/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonaUI/PersonaUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class CAGradientLayer, UITextField, PRMonogram, NSString;

@interface PRMonogramView : UIView <UITextFieldDelegate> {

	CAGradientLayer* _circleGradientLayer;
	UITextField* _textField;
	BOOL _bordered;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _allowsEditing;
	BOOL _circular;
	PRMonogram* _monogram;

}

@property (assign,getter=isCircular,nonatomic) BOOL circular;              //@synthesize circular=_circular - In the implementation block
@property (nonatomic,retain) PRMonogram * monogram;                        //@synthesize monogram=_monogram - In the implementation block
@property (assign,nonatomic) BOOL bordered;                                //@synthesize bordered=_bordered - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                             //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                           //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)highlighted;
-(BOOL)isSelected;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)dealloc;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)isCircular;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)layoutSubviews;
-(void)setMonogram:(PRMonogram *)arg1 ;
-(PRMonogram *)monogram;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)allowsEditing;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateCornerRadii;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
-(void)_updateTextLabel;
-(void)setBordered:(BOOL)arg1 ;
-(void)textFieldResignFirstResponder;
-(BOOL)bordered;
@end
