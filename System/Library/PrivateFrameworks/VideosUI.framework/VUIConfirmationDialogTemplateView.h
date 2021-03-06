/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface VUIConfirmationDialogTemplateView : UIView {

	UIVisualEffectView* _backdropView;
	UIView* _cardView;

}

@property (nonatomic,retain) UIView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(UIView *)cardView;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)_configureSubviews;
-(void)setCardView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)backdropView;
@end

