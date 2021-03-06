/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UIDropInteractionDelegate.h>

@protocol HUWallpaperThumbnailCellDelegate;
@class UIImageView, NSLayoutConstraint, UIDropInteraction, UIImage, NSString;

@interface HUWallpaperThumbnailCell : UITableViewCell <UIDropInteractionDelegate> {

	long long _contentMode;
	id<HUWallpaperThumbnailCellDelegate> _delegate;
	UIImageView* _imageThumbnailView;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	UIDropInteraction* _dropInteraction;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImageView * imageThumbnailView;                                  //@synthesize imageThumbnailView=_imageThumbnailView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageWidthConstraint;                         //@synthesize imageWidthConstraint=_imageWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageHeightConstraint;                        //@synthesize imageHeightConstraint=_imageHeightConstraint - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                               //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                                                  //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) long long contentMode;                                             //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic,__weak) id<HUWallpaperThumbnailCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(CGSize)imageSize;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(long long)contentMode;
-(UIImage *)image;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)prepareForReuse;
-(NSLayoutConstraint *)imageHeightConstraint;
-(void)setImageHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setDelegate:(id<HUWallpaperThumbnailCellDelegate>)arg1 ;
-(id<HUWallpaperThumbnailCellDelegate>)delegate;
-(NSLayoutConstraint *)imageWidthConstraint;
-(UIImageView *)imageThumbnailView;
-(void)setImageThumbnailView:(UIImageView *)arg1 ;
-(void)setImageWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

