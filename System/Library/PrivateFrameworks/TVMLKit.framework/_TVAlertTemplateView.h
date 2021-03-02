/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, NSArray, UICollectionView;

@interface _TVAlertTemplateView : UIView {

	UIImage* _bgImage;
	UIImageView* _bgImageView;
	NSArray* _viewsAbove;
	UICollectionView* _collectionView;
	NSArray* _viewsBelow;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSArray * viewsAbove;                           //@synthesize viewsAbove=_viewsAbove - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * viewsBelow;                           //@synthesize viewsBelow=_viewsBelow - In the implementation block
-(UIEdgeInsets)padding;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setViewsAbove:(NSArray *)arg1 ;
-(void)setViewsBelow:(NSArray *)arg1 ;
-(void)setBgImage:(id)arg1 ;
-(NSArray *)viewsAbove;
-(NSArray *)viewsBelow;
@end
