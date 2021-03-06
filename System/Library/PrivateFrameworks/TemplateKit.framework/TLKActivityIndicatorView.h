/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, UIActivityIndicatorView, TLKLabel;

@interface TLKActivityIndicatorView : TLKView {

	TLKMultilineText* _subtitle;
	UIActivityIndicatorView* _activityIndicator;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
-(TLKMultilineText *)subtitle;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(id)subtitleLabelText;
-(BOOL)usesDefaultLayoutMargins;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(TLKLabel *)subtitleLabel;
-(void)didMoveToWindow;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

