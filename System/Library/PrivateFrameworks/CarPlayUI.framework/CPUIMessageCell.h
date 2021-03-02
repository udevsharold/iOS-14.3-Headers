/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class UIImageView, UILabel, NSArray;

@interface CPUIMessageCell : _CPUIBaseTableCell {

	UIImageView* _unreadImageView;
	UIImageView* _leadingGlyphView;
	UIImageView* _primaryImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _trailingLabel;
	UIImageView* _trailingImageView;
	UIImageView* _trailingGlyphView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIImageView * unreadImageView;                //@synthesize unreadImageView=_unreadImageView - In the implementation block
@property (nonatomic,retain) UIImageView * leadingGlyphView;               //@synthesize leadingGlyphView=_leadingGlyphView - In the implementation block
@property (nonatomic,retain) UIImageView * primaryImageView;               //@synthesize primaryImageView=_primaryImageView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * trailingLabel;                      //@synthesize trailingLabel=_trailingLabel - In the implementation block
@property (nonatomic,retain) UIImageView * trailingImageView;              //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * trailingGlyphView;              //@synthesize trailingGlyphView=_trailingGlyphView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
+(double)minimumHeight;
+(double)rowHeight;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UILabel *)secondaryLabel;
-(NSArray *)constraints;
-(UILabel *)primaryLabel;
-(void)setUnread:(BOOL)arg1 ;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setTrailingImageView:(UIImageView *)arg1 ;
-(UIImageView *)trailingImageView;
-(void)applyConfiguration:(id)arg1 ;
-(void)configureCell;
-(UILabel *)trailingLabel;
-(UIImageView *)primaryImageView;
-(UIImageView *)trailingGlyphView;
-(UIImageView *)leadingGlyphView;
-(UIImageView *)unreadImageView;
-(void)setUnreadImageView:(UIImageView *)arg1 ;
-(void)setLeadingGlyphView:(UIImageView *)arg1 ;
-(void)setPrimaryImageView:(UIImageView *)arg1 ;
-(void)setTrailingLabel:(UILabel *)arg1 ;
-(void)setTrailingGlyphView:(UIImageView *)arg1 ;
@end
