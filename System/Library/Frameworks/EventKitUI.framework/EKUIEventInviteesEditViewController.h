/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {

	EKEvent* _event;
	EKUIEventInviteesViewController* _controller;

}

@property (nonatomic,readonly) NSDate * selectedStartDate; 
@property (nonatomic,readonly) NSDate * selectedEndDate; 
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(id)initWithEvent:(id)arg1 ;
-(void)loadView;
@end
