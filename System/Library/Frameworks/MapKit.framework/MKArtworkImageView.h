/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@protocol MKArtworkImageSource;
@class UIImageView, UIColor;

@interface MKArtworkImageView : UIImageView {

	UIImageView* _cachedBadgeView;
	id<MKArtworkImageSource> _imageSource;
	UIColor* _primaryTintColor;
	UIColor* _secondaryTintColor;

}

@property (nonatomic,readonly) UIImageView * badgeView; 
@property (nonatomic,retain) id<MKArtworkImageSource> imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) UIColor * primaryTintColor;                        //@synthesize primaryTintColor=_primaryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTintColor;                      //@synthesize secondaryTintColor=_secondaryTintColor - In the implementation block
-(void)_updateImageView;
-(id<MKArtworkImageSource>)imageSource;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImageView *)badgeView;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageSource:(id<MKArtworkImageSource>)arg1 ;
-(UIColor *)primaryTintColor;
-(void)setPrimaryTintColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTintColor;
-(void)setSecondaryTintColor:(UIColor *)arg1 ;
@end
