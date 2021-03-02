/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CalDAVCalendarServerActionItem* _action;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;                            //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerActionItem * action;              //@synthesize action=_action - In the implementation block
-(id)init;
-(CoreDAVLeafItem *)dtstamp;
-(void)setAction:(CalDAVCalendarServerActionItem *)arg1 ;
-(CalDAVCalendarServerActionItem *)action;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end
