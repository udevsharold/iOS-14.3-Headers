/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalContactsProviderDelegate.h>

@protocol OS_dispatch_queue;
@class CalLimitingQueue, NSObject;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {

	CalLimitingQueue* _updateQueue;
	NSObject*<OS_dispatch_queue> _updateJobQueue;
	BOOL _needsReset;

}
+(BOOL)areBirthdaysEnabled;
+(id)eventStoreProvider;
+(id)sharedListener;
-(void)addBirthdayCalendars;
-(void)reset;
-(id)birthdayCalendarsCreateIfNeeded:(BOOL)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(BOOL)arg5 ;
-(id)birthdayCalendarsInStore:(id)arg1 ;
-(id)eventStore;
-(void)contactsReset;
-(void)_localeChanged;
-(void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4 ;
-(id)initSingleton;
-(void)resetAllBirthdaysInStore:(id)arg1 ;
-(id)allContactsWithBirthdays;
-(void)disableBirthdayCalendarsInStore:(id)arg1 ;
-(void)checkForFailures;
-(void)disableBirthdayCalendars;
-(void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
@end
