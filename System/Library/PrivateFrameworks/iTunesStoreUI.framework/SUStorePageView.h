/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIScrollView;

@interface SUStorePageView : UIView {

	UIView* _backdropView;
	UIView* _contentView;
	UIView* _headerView;
	UIScrollView* _headerScrollView;
	UIView* _previewOverlayView;
	UIEdgeInsets _contentViewInsets;

}

@property (nonatomic,retain) UIView * backdropView;                       //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * previewOverlayView;                 //@synthesize previewOverlayView=_previewOverlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentViewInsets;              //@synthesize contentViewInsets=_contentViewInsets - In the implementation block
-(UIView *)headerView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setBackdropView:(UIView *)arg1 ;
-(UIEdgeInsets)contentViewInsets;
-(UIView *)backdropView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setPreviewOverlayView:(UIView *)arg1 ;
-(UIView *)previewOverlayView;
-(void)setContentViewInsets:(UIEdgeInsets)arg1 ;
@end

