/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMList, NSArray;

@interface REMListCalDAVNotificationContext : NSObject {

	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                               //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) NSArray * calDAVNotifications; 
-(NSArray *)calDAVNotifications;
-(REMList *)list;
-(void)setList:(REMList *)arg1 ;
-(id)initWithList:(id)arg1 ;
@end

