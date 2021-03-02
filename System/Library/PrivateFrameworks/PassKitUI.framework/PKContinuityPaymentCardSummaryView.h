/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSLayoutConstraint, NSMutableArray, NSString;

@interface PKContinuityPaymentCardSummaryView : UIView {

	UIImageView* _alertView;
	UILabel* _descriptionView;
	UILabel* _subtitleView;
	NSLayoutConstraint* _textToTrailingConstraint;
	NSLayoutConstraint* _textToAlertConstraint;
	NSMutableArray* _singleLineConstraints;
	NSMutableArray* _subtitleConstraints;
	BOOL _subtitleDescribesError;
	BOOL _showsAlert;
	NSString* _cardDescription;
	NSString* _subtitle;
	UIImageView* _thumbnailView;

}

@property (nonatomic,copy) NSString * cardDescription;                   //@synthesize cardDescription=_cardDescription - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL subtitleDescribesError;                //@synthesize subtitleDescribesError=_subtitleDescribesError - In the implementation block
@property (nonatomic,readonly) UIImageView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) BOOL showsAlert;                            //@synthesize showsAlert=_showsAlert - In the implementation block
-(void)updateConstraints;
-(NSString *)subtitle;
-(void)_createSubviews;
-(void)_createLabels;
-(void)setCardDescription:(NSString *)arg1 ;
-(void)setShowsAlert:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImageView *)thumbnailView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_prepareImageAndValueConstraints;
-(id)_formatTextForString:(id)arg1 alerting:(BOOL)arg2 ;
-(NSString *)cardDescription;
-(BOOL)subtitleDescribesError;
-(void)setSubtitleDescribesError:(BOOL)arg1 ;
-(BOOL)showsAlert;
@end
