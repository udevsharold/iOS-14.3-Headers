/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIButton, AKMarkupButtonContainerView;

@interface AKMarkupBarButtonItem : UIBarButtonItem {

	UIButton* _toggleButton;
	AKMarkupButtonContainerView* _toggleView;

}

@property (nonatomic,retain) UIButton * toggleButton;                               //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) AKMarkupButtonContainerView * toggleView;              //@synthesize toggleView=_toggleView - In the implementation block
+(id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(void)setAction:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UIButton *)toggleButton;
-(AKMarkupButtonContainerView *)toggleView;
-(void)setToggleView:(AKMarkupButtonContainerView *)arg1 ;
@end
