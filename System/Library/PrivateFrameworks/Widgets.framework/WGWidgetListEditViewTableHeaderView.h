/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView {

	UILabel* _headlineLabel;
	UILabel* _explanationLabel;

}

@property (nonatomic,readonly) double contentMinY; 
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 forTodayView:(BOOL)arg2 ;
-(CGRect)_headlineLabelFrameForBoundsWidth:(double)arg1 ;
-(CGRect)_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(CGRect)arg2 ;
-(double)contentMinY;
@end
