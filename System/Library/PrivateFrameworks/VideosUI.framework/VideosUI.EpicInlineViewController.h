/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class NSArray;

@interface VideosUI.EpicInlineViewController : UIViewController <TVAppTemplateImpressionable> {

	 collectionImpressioner;
	 viewElement;
	 shelfViewModel;
	 horizontalCollectionViewModel;
	 lastViewWidth;
	 shelfViewController;
	 horizontalStackViewController;
	 scrollViewMonitor;

}

@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
-(NSArray *)preferredFocusEnvironments;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end

