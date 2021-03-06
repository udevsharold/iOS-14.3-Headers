/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharingUI/SFShareAudioBaseViewController.h>

@class MTMaterialView, UIImageView, SFMediaPlayerView, UIButton;

@interface SFShareAudioConfirmViewController : SFShareAudioBaseViewController {

	MTMaterialView* _confirmButtonMaterialView;
	unsigned _colorCode;
	unsigned _productID;
	UIImageView* _productImageView;
	SFMediaPlayerView* _productMovieView;
	UIButton* _confirmButton;
	UIButton* _cancelButton;
	UIImageView* _shareImageView;

}

@property (nonatomic,retain) UIImageView * productImageView;                    //@synthesize productImageView=_productImageView - In the implementation block
@property (nonatomic,retain) SFMediaPlayerView * productMovieView;              //@synthesize productMovieView=_productMovieView - In the implementation block
@property (nonatomic,retain) UIButton * confirmButton;                          //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImageView * shareImageView;                      //@synthesize shareImageView=_shareImageView - In the implementation block
@property (assign,nonatomic) unsigned colorCode;                                //@synthesize colorCode=_colorCode - In the implementation block
@property (assign,nonatomic) unsigned productID;                                //@synthesize productID=_productID - In the implementation block
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(unsigned)productID;
-(UIButton *)confirmButton;
-(void)setConfirmButton:(UIButton *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setProductID:(unsigned)arg1 ;
-(unsigned)colorCode;
-(void)setColorCode:(unsigned)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)eventCancel:(id)arg1 ;
-(UIImageView *)shareImageView;
-(void)setShareImageView:(UIImageView *)arg1 ;
-(void)_updateDeviceVisual:(id)arg1 ;
-(UIImageView *)productImageView;
-(void)setProductImageView:(UIImageView *)arg1 ;
-(SFMediaPlayerView *)productMovieView;
-(void)setProductMovieView:(SFMediaPlayerView *)arg1 ;
-(void)eventConfirm:(id)arg1 ;
@end

