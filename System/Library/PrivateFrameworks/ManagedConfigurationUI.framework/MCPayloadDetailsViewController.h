/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCPayload, MCPayloadInfo, NSArray;

@interface MCPayloadDetailsViewController : MCUITableViewController {

	MCPayload* _payload;
	MCPayloadInfo* _payloadInfo;
	NSArray* _keyValueSections;

}

@property (nonatomic,retain) MCPayload * payload;                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) MCPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (nonatomic,retain) NSArray * keyValueSections;               //@synthesize keyValueSections=_keyValueSections - In the implementation block
-(void)_setup;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setPayload:(MCPayload *)arg1 ;
-(MCPayload *)payload;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(MCPayloadInfo *)payloadInfo;
-(id)initWithPayload:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setPayloadInfo:(MCPayloadInfo *)arg1 ;
-(NSArray *)keyValueSections;
-(void)setKeyValueSections:(NSArray *)arg1 ;
-(id)initWithPayloadInfo:(id)arg1 ;
-(void)setTitle:(id)arg1 keyValueSections:(id)arg2 ;
@end

