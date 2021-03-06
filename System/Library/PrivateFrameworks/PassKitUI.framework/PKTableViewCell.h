/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIColor;

@interface PKTableViewCell : UITableViewCell {

	BOOL _showsActionSpinner;
	UIColor* _highlightColor;
	UIColor* _checkmarkAccessoryColor;
	UIColor* _customAccessoryColor;
	double _minimumHeight;

}

@property (nonatomic,copy) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) UIColor * checkmarkAccessoryColor;              //@synthesize checkmarkAccessoryColor=_checkmarkAccessoryColor - In the implementation block
@property (nonatomic,copy) UIColor * customAccessoryColor;                 //@synthesize customAccessoryColor=_customAccessoryColor - In the implementation block
@property (assign,nonatomic) BOOL showsActionSpinner;                      //@synthesize showsActionSpinner=_showsActionSpinner - In the implementation block
@property (assign,nonatomic) double minimumHeight;                         //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(double)minimumHeight;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)setShowsActionSpinner:(BOOL)arg1 ;
-(void)setCheckmarkAccessoryColor:(UIColor *)arg1 ;
-(void)setCustomAccessoryColor:(UIColor *)arg1 ;
-(BOOL)showsActionSpinner;
-(UIColor *)customAccessoryColor;
-(void)setMinimumHeight:(double)arg1 ;
-(UIColor *)checkmarkAccessoryColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

