/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@protocol EKCellShortener;
@class UILabel;

@interface CalendarEventEditedByCell : EKUIConstrainedFontsTableViewCell {

	UILabel* _titleLabel2;
	UILabel* _valueLabel2;
	unsigned _valuePlaceholder : 2;
	id<EKCellShortener> _shortener;

}

@property (nonatomic,retain,readonly) UILabel * textLabel2; 
@property (nonatomic,retain,readonly) UILabel * detailTextLabel2; 
@property (assign,nonatomic,__weak) id<EKCellShortener> shortener;              //@synthesize shortener=_shortener - In the implementation block
-(void)setShortener:(id<EKCellShortener>)arg1 ;
-(void)_checkValueWidth;
-(UILabel *)detailTextLabel2;
-(void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)detailTextIsPlaceholder;
-(BOOL)detailText2IsPlaceholder;
-(void)setDetailTextIsPlaceholder:(BOOL)arg1 ;
-(void)setDetailText2IsPlaceholder:(BOOL)arg1 ;
-(UILabel *)textLabel2;
-(void)layoutSubviews;
-(id<EKCellShortener>)shortener;
@end
