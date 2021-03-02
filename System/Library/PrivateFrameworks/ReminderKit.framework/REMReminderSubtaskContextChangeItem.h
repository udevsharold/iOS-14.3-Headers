/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
-(REMReminderChangeItem *)reminderChangeItem;
-(void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(id)_listChangeItem;
-(void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2 ;
-(void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
-(void)addReminderChangeItem:(id)arg1 ;
@end
