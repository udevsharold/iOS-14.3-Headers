/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/ADActionViewController.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>

@class EKEvent, ADEventEditViewController, NSString;

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate> {

	EKEvent* _calendarEvent;
	ADEventEditViewController* _eventKitEditViewController;

}

@property (nonatomic,retain) EKEvent * calendarEvent;                                             //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,retain) ADEventEditViewController * eventKitEditViewController;              //@synthesize eventKitEditViewController=_eventKitEditViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismiss;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setCalendarEvent:(EKEvent *)arg1 ;
-(void)setEventKitEditViewController:(ADEventEditViewController *)arg1 ;
-(ADEventEditViewController *)eventKitEditViewController;
-(EKEvent *)calendarEvent;
@end

