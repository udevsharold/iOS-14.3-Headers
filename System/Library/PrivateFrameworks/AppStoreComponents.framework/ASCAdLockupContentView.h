/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/ASCOfferButtonDelegate.h>
#import <libobjc.A.dylib/ASCLockupPresenterView.h>
#import <libobjc.A.dylib/ASCAdLockupPresenterView.h>
#import <libobjc.A.dylib/ASCOfferPresenterView.h>

@class ASCOfferTheme, NSString, ASCArtworkView, ASCSkeletonLabel, ASCAdTransparencyButtonView, ASCStarRatingView, UILabel, ASCOfferButton, ASCEditorsChoiceView, UIColor;

@interface ASCAdLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCAdLockupPresenterView, ASCOfferPresenterView> {

	BOOL _adMarkerHidden;
	ASCOfferTheme* _offerTheme;
	NSString* _size;
	ASCArtworkView* _iconArtworkView;
	ASCSkeletonLabel* _titleLabel;
	ASCSkeletonLabel* _subtitleLabel;
	ASCAdTransparencyButtonView* _adTransparencyButton;
	ASCStarRatingView* _starRatingView;
	UILabel* _userRatingLabel;
	ASCOfferButton* _offerButton;
	ASCEditorsChoiceView* _editorsChoiceView;
	ASCSkeletonLabel* _descriptionLabel;
	UILabel* _headingLabelIfLoaded;
	UILabel* _offerStatusLabelIfLoaded;

}

@property (nonatomic,retain) NSString * size;                                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) ASCArtworkView * iconArtworkView;                                //@synthesize iconArtworkView=_iconArtworkView - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) ASCAdTransparencyButtonView * adTransparencyButton;              //@synthesize adTransparencyButton=_adTransparencyButton - In the implementation block
@property (nonatomic,readonly) ASCStarRatingView * starRatingView;                              //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) UILabel * userRatingLabel;                                       //@synthesize userRatingLabel=_userRatingLabel - In the implementation block
@property (nonatomic,readonly) ASCOfferButton * offerButton;                                    //@synthesize offerButton=_offerButton - In the implementation block
@property (nonatomic,readonly) ASCEditorsChoiceView * editorsChoiceView;                        //@synthesize editorsChoiceView=_editorsChoiceView - In the implementation block
@property (nonatomic,readonly) ASCSkeletonLabel * descriptionLabel;                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * headingLabelIfLoaded;                                  //@synthesize headingLabelIfLoaded=_headingLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * headingLabel; 
@property (nonatomic,readonly) UILabel * offerStatusLabelIfLoaded;                              //@synthesize offerStatusLabelIfLoaded=_offerStatusLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * offerStatusLabel; 
@property (assign,getter=isAdMarkerHidden,nonatomic) BOOL adMarkerHidden;                       //@synthesize adMarkerHidden=_adMarkerHidden - In the implementation block
@property (nonatomic,copy) ASCOfferTheme * offerTheme;                                          //@synthesize offerTheme=_offerTheme - In the implementation block
@property (nonatomic,copy) UIColor * loadingColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredIconSize; 
+(id)descriptionLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(void)setHeading:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(ASCSkeletonLabel *)titleLabel;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)size;
-(ASCSkeletonLabel *)descriptionLabel;
-(NSString *)description;
-(void)setSubtitle:(id)arg1 ;
-(void)layoutSubviews;
-(ASCSkeletonLabel *)subtitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(ASCStarRatingView *)starRatingView;
-(void)setLoading:(BOOL)arg1 ;
-(CGSize)preferredIconSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UILabel *)userRatingLabel;
-(void)setPrefersRightToLeftLayout:(BOOL)arg1 ;
-(void)setIconImage:(id)arg1 withDecoration:(id)arg2 ;
-(UILabel *)headingLabelIfLoaded;
-(UILabel *)offerStatusLabelIfLoaded;
-(ASCOfferButton *)offerButton;
-(void)addOfferTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addAdTransparencyTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isAdMarkerHidden;
-(void)setAdMarkerHidden:(BOOL)arg1 ;
-(ASCOfferTheme *)offerTheme;
-(void)setOfferEnabled:(BOOL)arg1 ;
-(void)setOfferStatus:(id)arg1 ;
-(void)setOfferInteractive:(BOOL)arg1 ;
-(void)setOfferMetadata:(id)arg1 ;
-(void)endOfferModalState;
-(id)saveOfferState;
-(void)beginOfferModalStateWithCancelBlock:(/*^block*/id)arg1 ;
-(void)offerButton:(id)arg1 willTransitionToMetadata:(id)arg2 usingAnimator:(id)arg3 ;
-(id)makeLayout;
-(void)setEditorsChoice:(BOOL)arg1 ;
-(void)setProductRating:(float)arg1 ;
-(void)setProductRatingBadge:(id)arg1 ;
-(void)setProductDescription:(id)arg1 ;
-(void)setAdTranparencyButtonHidden:(BOOL)arg1 ;
-(ASCArtworkView *)iconArtworkView;
-(ASCAdTransparencyButtonView *)adTransparencyButton;
-(ASCEditorsChoiceView *)editorsChoiceView;
-(UILabel *)headingLabel;
-(UILabel *)offerStatusLabel;
-(UIColor *)loadingColor;
-(void)setLoadingColor:(UIColor *)arg1 ;
-(void)removeOfferTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeAdTransparencyTarget:(id)arg1 action:(SEL)arg2 ;
@end
