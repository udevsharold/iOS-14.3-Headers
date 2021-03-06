/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CNAtomView;

@interface CNModernAtomBackgroundView : UIView {

	UIView* _selectedView;
	unsigned long long _selectionStyle;
	UIView* _separatorView;
	int _separatorStyle;
	BOOL _selected;
	double _scalingFactor;
	CNAtomView* _hostAtomView;

}

@property (nonatomic,readonly) UIView * selectedView;                       //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                      //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic,__weak) CNAtomView * hostAtomView;              //@synthesize hostAtomView=_hostAtomView - In the implementation block
@property (assign,nonatomic) int separatorStyle;                            //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) double scalingFactor;                          //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(UIView *)separatorView;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3 updateVisualSelection:(BOOL)arg4 ;
-(void)displaySelectionChangeWithAnimation:(BOOL)arg1 ;
-(BOOL)appearsSelected;
-(double)separatorWidth;
-(void)setScalingFactor:(double)arg1 ;
-(void)tintColorDidChange;
-(BOOL)isSelected;
-(id)wrappedTintColor;
-(id)_chevronImage;
-(UIEdgeInsets)_backgroundBleedArea;
-(void)_setSelectionStyle:(unsigned long long)arg1 ;
-(double)scalingFactor;
-(void)invalidateIntrinsicContentSize;
-(int)separatorStyle;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)selectedView;
-(void)setHostAtomView:(CNAtomView *)arg1 ;
-(CNAtomView *)hostAtomView;
@end

