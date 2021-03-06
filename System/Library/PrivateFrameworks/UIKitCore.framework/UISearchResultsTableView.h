/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIView, UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {

	double _offsetForNoResultsMessage;
	UIView* _topShadowView;
	UISearchDisplayController* _controller;

}

@property (assign,nonatomic,__weak) UISearchDisplayController * controller;                                        //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(UISearchDisplayController *)controller;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_numberOfRowsDidChange;
-(void)_setTopShadowView:(id)arg1 ;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(UIView *)_topShadowView;
@end

