/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardDeletionDelegate;
@class UITableViewCell;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardDeletionDelegate> _deletionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardDeletionDelegate> deletionDelegate;              //@synthesize deletionDelegate=_deletionDelegate - In the implementation block
-(UIEdgeInsets)separatorInset;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)title;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(id<HKEmergencyCardDeletionDelegate>)deletionDelegate;
-(void)setDeletionDelegate:(id<HKEmergencyCardDeletionDelegate>)arg1 ;
@end

