/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeed/NewsFeed-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@interface NewsFeed.DebugFormatEditorViewController : UIViewController <UIScrollViewDelegate> {

	 delegate;
	 editor;
	 packages;
	 errorViewController;
	 canvasViewController;
	 scrollView;
	 rulerView;
	 $__lazy_storage_$_overlayView;
	 contentView;
	 statusView;
	 zoomLabel;

}
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)doToggleSidebar;
-(void)doLightDarkModeWithSender:(id)arg1 ;
-(void)doDevicesWithSender:(id)arg1 ;
-(void)doOptionsWithSender:(id)arg1 ;
-(void)resetZoom;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)doReload;
-(void)doDismiss;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewLayoutMarginsDidChange;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
@end
