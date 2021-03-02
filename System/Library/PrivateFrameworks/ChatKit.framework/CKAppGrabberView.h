/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKAppGrabberViewDelegate;
@class UIImageView, UILabel, UIButton, UIView, _UIGrabber, NSString;

@interface CKAppGrabberView : UIView {

	UIImageView* _iconImageView;
	UIImageView* _iconOutlineView;
	UILabel* _pluginTitleLabel;
	UIButton* _closeButton;
	UIView* _headerView;
	UIView* _grayLine;
	_UIGrabber* _chevronView;
	NSString* _appIdentifier;
	BOOL _showsAppTitle;
	BOOL _roundsTopCorners;
	id<CKAppGrabberViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKAppGrabberViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsGrabberPill; 
@property (assign,nonatomic) BOOL showsAppTitle;                                        //@synthesize showsAppTitle=_showsAppTitle - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                  //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) BOOL roundsTopCorners;                                     //@synthesize roundsTopCorners=_roundsTopCorners - In the implementation block
@property (nonatomic,readonly) double visualOriginYOffset; 
@property (nonatomic,readonly) double chevronMaxYOffset; 
+(double)roundedCornerRadius;
+(double)compactRoundedCornerRadius;
-(id)iconImageView;
-(double)visualOriginYOffset;
-(double)chevronMaxYOffset;
-(double)chevronMaxYInView:(id)arg1 ;
-(id)headerView;
-(void)setShowsAppTitle:(BOOL)arg1 ;
-(void)setShowsGrabberPill:(BOOL)arg1 ;
-(void)updateAppTitle:(id)arg1 icon:(id)arg2 appIdentifier:(id)arg3 ;
-(void)setRoundsTopCorners:(BOOL)arg1 ;
-(BOOL)roundsTopCorners;
-(double)visualOriginYInView:(id)arg1 ;
-(UIButton *)closeButton;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CKAppGrabberViewDelegate>)arg1 ;
-(BOOL)showsAppTitle;
-(id<CKAppGrabberViewDelegate>)delegate;
-(BOOL)showsGrabberPill;
-(void)updateHeaderFrame:(BOOL)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(void)updateIconImageView:(id)arg1 ;
@end
