/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/FUFlightViewControllerDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class FUFlightViewController, SFFlightCardSection, NUIContainerBoxView, NSString;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate> {

	FUFlightViewController* _flightViewController;
	unsigned long long _lastSelectedLegIndex;

}

@property (nonatomic,retain) SFFlightCardSection * section; 
@property (nonatomic,retain) FUFlightViewController * flightViewController;              //@synthesize flightViewController=_flightViewController - In the implementation block
@property (assign,nonatomic) unsigned long long lastSelectedLegIndex;                    //@synthesize lastSelectedLegIndex=_lastSelectedLegIndex - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * contentView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg1 ;
-(void)setLastSelectedLegIndex:(unsigned long long)arg1 ;
-(void)setFlightViewController:(FUFlightViewController *)arg1 ;
-(FUFlightViewController *)flightViewController;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(unsigned long long)lastSelectedLegIndex;
-(void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3 ;
-(id)setupContentView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
@end
