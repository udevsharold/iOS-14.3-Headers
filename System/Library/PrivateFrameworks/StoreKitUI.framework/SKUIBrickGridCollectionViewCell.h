/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImageView, SKUIEditorialCellLayout, UIView, UIImage;

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {

	NSString* _accessibilityLabel;
	UIImageView* _brickImageView;
	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;               //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,retain) UIImage * brickImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)accessibilityLabel;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 orientation:(long long)arg2 ;
-(void)setBrickImage:(UIImage *)arg1 ;
-(UIImage *)brickImage;
@end

