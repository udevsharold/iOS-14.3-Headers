/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItemChangeTransaction.h>

@class REMReminderChangeItem, REMStore, REMSaveRequest;

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction {

	REMReminderChangeItem* _mutableReminder;
	REMStore* _store;
	REMSaveRequest* _saveRequest;

}

@property (nonatomic,readonly) REMStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) REMSaveRequest * saveRequest;                           //@synthesize saveRequest=_saveRequest - In the implementation block
@property (nonatomic,readonly) REMReminderChangeItem * mutableReminder;              //@synthesize mutableReminder=_mutableReminder - In the implementation block
-(REMStore *)store;
-(REMSaveRequest *)saveRequest;
-(id)initWithContentItem:(id)arg1 ;
-(void)updateList:(id)arg1 ;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(BOOL)arg2 ;
-(void)updateSubtasks:(id)arg1 ;
-(REMReminderChangeItem *)mutableReminder;
-(void)setSaveRequest:(REMSaveRequest *)arg1 ;
@end

