/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class VideosExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, NSArray, MPUContentSizeLayoutConstraint, IKListItemLockupElement;

@interface VideosExtrasTableViewCell : UITableViewCell {

	VideosExtrasConstrainedArtworkContainerView* _artworkContainer;
	UIView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSArray* _topConstraints;
	NSArray* _bottomConstraints;
	NSLayoutConstraint* _leadingViewConstraint;
	NSLayoutConstraint* _artworkSpacerHeightConstraint;
	NSLayoutConstraint* _textSpacerHeightConstraint;
	NSLayoutConstraint* _artworkWidthConstraint;
	NSLayoutConstraint* _artworkHeightConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	IKListItemLockupElement* _element;

}

@property (assign,nonatomic) IKListItemLockupElement * element;                                                 //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) VideosExtrasConstrainedArtworkContainerView * artworkContainerView;              //@synthesize artworkContainer=_artworkContainer - In the implementation block
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setElement:(IKListItemLockupElement *)arg1 ;
-(IKListItemLockupElement *)element;
-(void)configureForListItemLockupElement:(id)arg1 wide:(BOOL)arg2 ;
-(VideosExtrasConstrainedArtworkContainerView *)artworkContainerView;
@end

