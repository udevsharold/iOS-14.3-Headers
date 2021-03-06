/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSArray, NSNumber, NSString, NSDate;

@interface CalendarPreferences : NSObject {

	CalPreferences* _preferences;
	BOOL _drawDebugViewColors;

}

@property (assign,nonatomic) BOOL showWeekNumbers; 
@property (assign,nonatomic) BOOL weekViewStartsOnToday; 
@property (assign,nonatomic) BOOL showListView; 
@property (assign,nonatomic) BOOL showMonthDividedListView; 
@property (assign,nonatomic) BOOL viewedTimeZoneAutomatic; 
@property (assign,nonatomic) BOOL requestSyncOnApplicationLaunch; 
@property (assign,nonatomic) BOOL drawDebugViewColors;                                                       //@synthesize drawDebugViewColors=_drawDebugViewColors - In the implementation block
@property (assign,nonatomic) BOOL immediateAlarmCreation; 
@property (assign,nonatomic) BOOL showEventsInPhoneMonthView; 
@property (assign,nonatomic) BOOL showExperimentalUI; 
@property (assign,nonatomic) BOOL showDetailedListView; 
@property (assign,nonatomic) BOOL disableContinuity; 
@property (assign,nonatomic) BOOL swipeToDeleteEnabled; 
@property (assign,nonatomic) BOOL largeListViewDisclosingEventDetails; 
@property (assign,nonatomic) BOOL showWindowDebugButton; 
@property (assign,getter=isShortResumeToTodayTimeout,nonatomic) BOOL shortResumeToTodayTimeout; 
@property (assign,nonatomic) BOOL hideInlineDayViewInEventDetails; 
@property (assign,nonatomic) BOOL disableTodayPushes; 
@property (assign,nonatomic) BOOL enableAvatars; 
@property (assign,nonatomic) BOOL enableMultiwindowAsserts; 
@property (assign,nonatomic) unsigned long long promptForCommentWhenDeclining; 
@property (assign,nonatomic) unsigned long long debugOccurrenceViewIconOverload; 
@property (nonatomic,retain) NSArray * calendarUUIDsExcludedFromNotifications; 
@property (nonatomic,retain) NSNumber * weekStart; 
@property (nonatomic,retain) NSNumber * lastSuspendTime; 
@property (nonatomic,retain) NSNumber * lastViewedDate; 
@property (nonatomic,retain) NSNumber * lastViewMode; 
@property (nonatomic,retain) NSNumber * lastSidebarMode; 
@property (nonatomic,retain) NSNumber * dayViewHourScale; 
@property (nonatomic,retain) NSNumber * weekViewHourScale; 
@property (nonatomic,retain) NSString * sourceIdentifierForSelectedIdentity; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSString * overlayCalendarID; 
@property (nonatomic,retain) NSDate * simulatedCurrentDate; 
@property (nonatomic,retain) NSNumber * locationSearchResultLimit; 
@property (assign,nonatomic) BOOL eventAutocompleteEnabled; 
@property (assign,nonatomic) BOOL highColorCarplayEnabled; 
@property (nonatomic,retain) NSNumber * dayViewFirstVisibleSecond; 
@property (nonatomic,readonly) NSArray * deselectedCalendarSyncHashes; 
+(id)sharedPreferences;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchString;
-(void)setWeekViewStartsOnToday:(BOOL)arg1 ;
-(void)setShowExperimentalUI:(BOOL)arg1 ;
-(void)setShowEventsInPhoneMonthView:(BOOL)arg1 ;
-(NSNumber *)weekStart;
-(void)setSwipeToDeleteEnabled:(BOOL)arg1 ;
-(BOOL)disableContinuity;
-(BOOL)showListView;
-(unsigned long long)promptForCommentWhenDeclining;
-(void)setShortResumeToTodayTimeout:(BOOL)arg1 ;
-(NSString *)sourceIdentifierForSelectedIdentity;
-(void)setShowWindowDebugButton:(BOOL)arg1 ;
-(BOOL)enableAvatars;
-(NSNumber *)lastViewMode;
-(id)init;
-(void)setShowListView:(BOOL)arg1 ;
-(NSArray *)calendarUUIDsExcludedFromNotifications;
-(void)setOverlayCalendarID:(NSString *)arg1 ;
-(BOOL)isShortResumeToTodayTimeout;
-(void)setImmediateAlarmCreation:(BOOL)arg1 ;
-(NSNumber *)dayViewFirstVisibleSecond;
-(void)setViewedTimeZoneAutomatic:(BOOL)arg1 ;
-(void)setDisableContinuity:(BOOL)arg1 ;
-(BOOL)eventAutocompleteEnabled;
-(NSArray *)deselectedCalendarSyncHashes;
-(void)setLocationSearchResultLimit:(NSNumber *)arg1 ;
-(NSNumber *)lastSidebarMode;
-(BOOL)viewedTimeZoneAutomatic;
-(BOOL)showExperimentalUI;
-(NSNumber *)lastSuspendTime;
-(void)setShowMonthDividedListView:(BOOL)arg1 ;
-(BOOL)showEventsInPhoneMonthView;
-(void)setDisableTodayPushes:(BOOL)arg1 ;
-(BOOL)weekViewStartsOnToday;
-(NSString *)overlayCalendarID;
-(BOOL)highColorCarplayEnabled;
-(void)setDayViewHourScale:(NSNumber *)arg1 ;
-(void)setHideInlineDayViewInEventDetails:(BOOL)arg1 ;
-(void)setLastViewedDate:(NSNumber *)arg1 ;
-(NSNumber *)locationSearchResultLimit;
-(NSNumber *)weekViewHourScale;
-(void)setEnableAvatars:(BOOL)arg1 ;
-(BOOL)enableMultiwindowAsserts;
-(void)setPromptForCommentWhenDeclining:(unsigned long long)arg1 ;
-(void)setEnableMultiwindowAsserts:(BOOL)arg1 ;
-(BOOL)showWeekNumbers;
-(void)setWeekViewHourScale:(NSNumber *)arg1 ;
-(BOOL)immediateAlarmCreation;
-(BOOL)showDetailedListView;
-(BOOL)drawDebugViewColors;
-(BOOL)swipeToDeleteEnabled;
-(void)setEventAutocompleteEnabled:(BOOL)arg1 ;
-(void)setCalendarUUIDsExcludedFromNotifications:(NSArray *)arg1 ;
-(void)setDrawDebugViewColors:(BOOL)arg1 ;
-(NSNumber *)dayViewHourScale;
-(BOOL)largeListViewDisclosingEventDetails;
-(void)setLastSuspendTime:(NSNumber *)arg1 ;
-(void)setSimulatedCurrentDate:(NSDate *)arg1 ;
-(BOOL)showMonthDividedListView;
-(void)setLargeListViewDisclosingEventDetails:(BOOL)arg1 ;
-(void)setDayViewFirstVisibleSecond:(NSNumber *)arg1 ;
-(void)setHighColorCarplayEnabled:(BOOL)arg1 ;
-(void)setLastSidebarMode:(NSNumber *)arg1 ;
-(unsigned long long)debugOccurrenceViewIconOverload;
-(NSNumber *)lastViewedDate;
-(void)setWeekStart:(NSNumber *)arg1 ;
-(BOOL)requestSyncOnApplicationLaunch;
-(void)setShowDetailedListView:(BOOL)arg1 ;
-(void)setRequestSyncOnApplicationLaunch:(BOOL)arg1 ;
-(NSDate *)simulatedCurrentDate;
-(BOOL)showWindowDebugButton;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(BOOL)hideInlineDayViewInEventDetails;
-(BOOL)disableTodayPushes;
-(void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1 ;
-(void)setSourceIdentifierForSelectedIdentity:(NSString *)arg1 ;
-(void)setLastViewMode:(NSNumber *)arg1 ;
@end

