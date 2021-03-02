/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/MKInfoCardThemeListener.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate;
@class MKPlaceSectionHeaderView, NSArray, MKMapItem, NSTimeZone, NSString;

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKStackingViewControllerFixedHeightAware, MKInfoCardThemeListener, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isExpanded;
	MKPlaceSectionHeaderView* _headerView;
	NSArray* _businessHours;
	BOOL _resizableViewsDisabled;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSArray * businessHours; 
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                            //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeHoursWithMapItem:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(NSArray *)businessHours;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(void)_contentSizeDidChange;
-(id)titleString;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_setExpanded:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(MKMapItem *)mapItem;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(BOOL)_canShowWhileLocked;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)_toggleShowAllHours;
-(void)_updateHoursAnimated:(BOOL)arg1 ;
-(BOOL)_shouldOnlyShowExpanded;
-(id)hoursBuilderWithHours:(id)arg1 ;
-(void)viewDidLoad;
@end
