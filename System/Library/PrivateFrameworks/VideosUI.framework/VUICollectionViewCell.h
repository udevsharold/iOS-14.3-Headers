/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface VUICollectionViewCell : UICollectionViewCell {

	UIView* _childView;

}

@property (nonatomic,retain) UIView * childView;              //@synthesize childView=_childView - In the implementation block
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setChildView:(UIView *)arg1 ;
-(UIView *)childView;
@end

