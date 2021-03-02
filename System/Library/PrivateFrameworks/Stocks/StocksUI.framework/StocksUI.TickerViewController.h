/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface StocksUI.TickerViewController : UIViewController <UICollectionViewDelegate> {

	 autoScrolling;
	 styler;
	 eventHandler;
	 blueprintViewController;

}
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
