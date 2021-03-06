/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContextMenuActionView.h>

@class UIActivityIndicatorView;

@interface _UIContextMenuLoadingActionView : _UIContextMenuActionView {

	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)trailingView;
-(void)_updateContentAppearance;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(id)_contentsTintColor;
-(id)_contentsCompositingFilter;
-(BOOL)_ignoreRemoveAllAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
@end

