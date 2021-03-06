/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImage, UIScrollView, UIImageView, NSString;

@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate> {

	UIImage* _drawingImage;
	UIScrollView* _scrollView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * drawingImage;                 //@synthesize drawingImage=_drawingImage - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIImageView *)imageView;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)viewDidLoad;
-(UIImage *)drawingImage;
-(void)centerImageView;
-(id)initWithDrawingImage:(id)arg1 ;
-(void)setDrawingImage:(UIImage *)arg1 ;
@end

