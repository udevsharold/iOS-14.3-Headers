/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {

	EKSource* _limitedToSource;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)currentSource;
-(BOOL)canAddCalendarToMoreThanOneAccount;
-(id)initLimitedToSource:(id)arg1 ;
-(BOOL)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
@end
