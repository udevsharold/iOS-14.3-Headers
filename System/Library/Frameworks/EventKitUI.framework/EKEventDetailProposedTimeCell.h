/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class EKCalendarEventInvitationNotificationAttendee, EKEventDetailsHighlightControl, EKEvent;

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {

	EKCalendarEventInvitationNotificationAttendee* _attendee;
	EKEventDetailsHighlightControl* _control;
	EKEvent* _event;

}
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)update;
-(id)initWithEvent:(id)arg1 andAttendee:(id)arg2 ;
-(BOOL)shouldDisplayForEvent;
-(BOOL)hasCustomLayout;
@end

