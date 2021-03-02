/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSMutableDictionary, NSArray;

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {

	NSMutableDictionary* _cellForAttendee;
	NSArray* _attendeesWithProposedTimes;
	BOOL _visibilityChanged;

}
-(unsigned long long)numberOfSubitems;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)attendeeForIndex:(unsigned long long)arg1 ;
-(BOOL)detailItemVisibilityChanged;
-(void)setCellPosition:(int)arg1 ;
-(void)_updateCellsIfNeededForWidth:(double)arg1 ;
@end
