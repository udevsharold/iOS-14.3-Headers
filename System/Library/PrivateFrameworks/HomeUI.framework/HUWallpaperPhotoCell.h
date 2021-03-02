/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HUWallpaperPhotoCellDelegate;
@class NSString, UIImageView, UIActivityIndicatorView, UIView, UIButton, UILabel, UIStackView, CAShapeLayer, NSLayoutConstraint, UIImage;

@interface HUWallpaperPhotoCell : UICollectionViewCell {

	BOOL _busy;
	BOOL _empty;
	BOOL _removable;
	BOOL _showBorder;
	NSString* _assetIdentifier;
	double _cornerRadius;
	long long _contentMode;
	id<HUWallpaperPhotoCellDelegate> _delegate;
	UIImageView* _imageView;
	UIActivityIndicatorView* _spinnerView;
	UIView* _selectionOverlayView;
	UIButton* _deleteButton;
	UILabel* _choosePhotoLabel;
	UIStackView* _stackView;
	CAShapeLayer* _borderLayer;
	NSLayoutConstraint* _imageWidthConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                       //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * selectionOverlayView;                                 //@synthesize selectionOverlayView=_selectionOverlayView - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                       //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UILabel * choosePhotoLabel;                                    //@synthesize choosePhotoLabel=_choosePhotoLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                       //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * borderLayer;                                    //@synthesize borderLayer=_borderLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                     //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifier;                                      //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL busy;                                                     //@synthesize busy=_busy - In the implementation block
@property (assign,nonatomic) BOOL empty;                                                    //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) BOOL removable;                                                //@synthesize removable=_removable - In the implementation block
@property (assign,nonatomic) BOOL showBorder;                                               //@synthesize showBorder=_showBorder - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) long long contentMode;                                         //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperPhotoCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(BOOL)busy;
-(long long)contentMode;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setShowBorder:(BOOL)arg1 ;
-(UIStackView *)stackView;
-(void)updateView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(UIImageView *)imageView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)removable;
-(void)setRemovable:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)deleteButton;
-(void)setDelegate:(id<HUWallpaperPhotoCellDelegate>)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setBusy:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)empty;
-(id<HUWallpaperPhotoCellDelegate>)delegate;
-(void)showBorder:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)imageWidthConstraint;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)deleteButtonPressed;
-(UILabel *)choosePhotoLabel;
-(UIView *)selectionOverlayView;
-(BOOL)showBorder;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(CAShapeLayer *)borderLayer;
-(void)setSelectionOverlayView:(UIView *)arg1 ;
-(void)setChoosePhotoLabel:(UILabel *)arg1 ;
-(void)setBorderLayer:(CAShapeLayer *)arg1 ;
@end
