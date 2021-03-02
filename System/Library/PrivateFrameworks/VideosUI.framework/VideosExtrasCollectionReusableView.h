/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UIView, NSArray;

@interface VideosExtrasCollectionReusableView : UICollectionReusableView {

	UILabel* _textLabel;
	MPUContentSizeLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textLeftConstraint;
	MPUContentSizeLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textRightConstraint;
	UIEdgeInsets _labelInsets;
	UIView* _borderView;
	NSArray* _borderConstraints;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2 ;
-(void)_configureConstraintsForInsets:(UIEdgeInsets)arg1 ;
@end
