/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WallpaperKit/WallpaperKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIBackdropView, UIActivityIndicatorView, UILabel;

@interface WKIndicatorView : UIView {

	BOOL __hasBeenConfigured;
	_UIBackdropView* __backdropView;
	UIActivityIndicatorView* __activityIndicatorView;
	UILabel* __label;

}

@property (assign,nonatomic) BOOL _hasBeenConfigured;                                       //@synthesize _hasBeenConfigured=__hasBeenConfigured - In the implementation block
@property (nonatomic,retain) _UIBackdropView * _backdropView;                               //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * _activityIndicatorView;              //@synthesize _activityIndicatorView=__activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * _label;                                              //@synthesize _label=__label - In the implementation block
-(UILabel *)_label;
-(UIActivityIndicatorView *)_activityIndicatorView;
-(_UIBackdropView *)_backdropView;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_hasBeenConfigured;
-(void)set_hasBeenConfigured:(BOOL)arg1 ;
-(void)_configureViewIfNeeded;
-(void)showViewWithMessage:(id)arg1 inHostingView:(id)arg2 ;
-(void)hideViewAndRemoveFromHostingView;
-(void)set_backdropView:(_UIBackdropView *)arg1 ;
-(void)set_activityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)set_label:(UILabel *)arg1 ;
@end

