/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/ASCLockupMediaPresenterView.h>

@class ASCVideoView, ASCScreenshots, ASCTrailers, NSMutableArray, NSArray, NSString;

@interface ASCLockupMediaView : UIControl <ASCLockupMediaPresenterView> {

	ASCVideoView* _videoView;
	unsigned long long _numberOfViews;
	ASCScreenshots* _screenshots;
	ASCTrailers* _trailers;
	NSMutableArray* _imageViews;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;                 //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) ASCVideoView * videoView;                      //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) NSArray * mediaViews; 
@property (assign,nonatomic) unsigned long long numberOfViews;              //@synthesize numberOfViews=_numberOfViews - In the implementation block
@property (nonatomic,copy) ASCScreenshots * screenshots;                    //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,copy) ASCTrailers * trailers;                          //@synthesize trailers=_trailers - In the implementation block
@property (nonatomic,readonly) CGSize preferredScreenshotSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoView:(ASCVideoView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)invalidateIntrinsicContentSize;
-(ASCVideoView *)videoView;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(NSMutableArray *)imageViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)numberOfViews;
-(ASCScreenshots *)screenshots;
-(void)setScreenshots:(ASCScreenshots *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ASCTrailers *)trailers;
-(void)setNumberOfViews:(unsigned long long)arg1 ;
-(void)setTrailers:(ASCTrailers *)arg1 ;
-(CGSize)preferredScreenshotSize;
-(void)setImage:(id)arg1 atIndex:(long long)arg2 withDecoration:(id)arg3 ;
-(id)makeLayout;
-(NSArray *)mediaViews;
-(id)makeSizingLayout;
-(void)updateImageViews;
@end
