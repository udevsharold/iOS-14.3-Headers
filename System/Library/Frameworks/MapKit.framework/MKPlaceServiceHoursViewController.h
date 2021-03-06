/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceServiceHoursViewControllerProtocol;
@class MKPlaceSectionHeaderView, UIScrollView, UIStackView, MKMapItem, NSString;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isExpanded;
	MKPlaceSectionHeaderView* _headerView;
	long long _type;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	BOOL _expanded;
	id<MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                          //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;              //@synthesize placeServiceDelegate=_placeServiceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2 ;
+(id)titleString;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setPlaceServiceDelegate:(id<MKPlaceServiceHoursViewControllerProtocol>)arg1 ;
-(BOOL)expanded;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)_maxRows;
-(void)_contentSizeDidChange;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(MKMapItem *)mapItem;
-(BOOL)_canShowWhileLocked;
-(id)initWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)_showAllHeaderButtonTapped;
-(void)_updateServiceHourRows;
-(void)captureCloseAnalytics;
-(id<MKPlaceServiceHoursViewControllerProtocol>)placeServiceDelegate;
-(void)viewDidLoad;
@end

