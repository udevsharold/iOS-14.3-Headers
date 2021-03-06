/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionListDataSource, CNUIContactsEnvironment;

@interface CNContactActionsContext : NSObject {

	CNUIUserActionListDataSource* _dataSource;
	CNUIContactsEnvironment* _environment;

}

@property (readonly) CNUIUserActionListDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) CNUIContactsEnvironment * environment;                  //@synthesize environment=_environment - In the implementation block
-(id)init;
-(void)setCacheEntryRefreshAge:(double)arg1 ;
-(void)setCacheEntryExpirationAge:(double)arg1 ;
-(void)setCacheEntryLimit:(unsigned long long)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 ;
-(id)description;
-(CNUIUserActionListDataSource *)dataSource;
-(CNUIContactsEnvironment *)environment;
@end

