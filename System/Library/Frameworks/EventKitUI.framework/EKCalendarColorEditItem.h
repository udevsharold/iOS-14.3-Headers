/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem {

	NSMutableArray* _cells;
	unsigned long long _checkedRow;

}

@property (nonatomic,readonly) NSMutableArray * cells;              //@synthesize cells=_cells - In the implementation block
-(id)headerTitle;
-(unsigned long long)numberOfSubitems;
-(NSMutableArray *)cells;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)reset;
-(id)_cellWithText:(id)arg1 ;
-(id)_cellForSymbolicColor:(id)arg1 ;
-(id)_cellForColor:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(BOOL)saveStateToCalendar:(id)arg1 ;
@end

