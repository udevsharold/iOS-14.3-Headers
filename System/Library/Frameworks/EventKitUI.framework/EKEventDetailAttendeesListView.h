/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, NSArray, UIActivityIndicatorView, UIColor, UIViewController;

@interface EKEventDetailAttendeesListView : UIView {

	long long _statusCounts[4];
	long long _columnAItems;
	long long _columnBItems;
	int _firstColumnBType;
	double _maxHeight;
	double _actualHeight;
	NSMutableArray* _inviteeNames;
	BOOL _shouldEvenOutBlocks;
	NSArray* _finalizedNames;
	UIActivityIndicatorView* _spinnerView;
	BOOL _showingSpinner;
	BOOL _highlighted;
	BOOL _groupsNames;
	NSArray* _ungrouped;
	UIColor* _textColor;
	UIColor* _highlightedTextColor;
	UIViewController* _viewController;
	double _bottomSpacingForSpinner;

}

@property (nonatomic,retain) NSArray * ungrouped;                                   //@synthesize ungrouped=_ungrouped - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                        //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL groupsNames;                                      //@synthesize groupsNames=_groupsNames - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) double bottomSpacingForSpinner;                        //@synthesize bottomSpacingForSpinner=_bottomSpacingForSpinner - In the implementation block
@property (nonatomic,readonly) long long columnAItems;                              //@synthesize columnAItems=_columnAItems - In the implementation block
@property (nonatomic,readonly) long long columnBItems;                              //@synthesize columnBItems=_columnBItems - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setup;
-(void)contentSizeCategoryChanged;
-(BOOL)isHighlighted;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)dealloc;
-(UIColor *)highlightedTextColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)maxHeight;
-(BOOL)_haveInviteesToDraw;
-(void)_setShowingSpinner:(BOOL)arg1 ;
-(void)_layoutSpinner;
-(double)calculatedHeight;
-(BOOL)_shouldAlwaysDrawSingleColumn;
-(BOOL)_haveContentToDraw;
-(double)_calculateHeightForSpinnerDisplayMode;
-(double)_calculateHeightForItemCounts:(long long)arg1 ;
-(void)_createSpinnerViewIfNeeded;
-(double)bottomSpacingForSpinner;
-(id)generateAttributedStringsFromDisplayParticipants:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3 ;
-(void)setBottomSpacingForSpinner:(double)arg1 ;
-(void)setInvitees:(id)arg1 forStatus:(int)arg2 ;
-(void)setGroupsNames:(BOOL)arg1 ;
-(void)setUngrouped:(NSArray *)arg1 ;
-(void)finalizeInviteNames;
-(void)drawNames:(id)arg1 ;
-(double)maxColumnHeight;
-(void)recalculateHeight;
-(NSArray *)ungrouped;
-(BOOL)groupsNames;
-(long long)columnAItems;
-(long long)columnBItems;
-(void)showSpinner;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController *)viewController;
@end

