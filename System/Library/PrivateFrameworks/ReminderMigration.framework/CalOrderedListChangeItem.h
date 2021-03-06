/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMListChangeItem;

@interface CalOrderedListChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;
	long long _order;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (assign,nonatomic) long long order;                                 //@synthesize order=_order - In the implementation block
-(void)setOrder:(long long)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(long long)order;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
@end

