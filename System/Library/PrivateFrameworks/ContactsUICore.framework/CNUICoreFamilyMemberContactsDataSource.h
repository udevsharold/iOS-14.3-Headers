/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber;


@protocol CNUICoreFamilyMemberContactsDataSource <NSObject>
@property (assign,nonatomic,__weak) id<CNUICoreFamilyMemberContactsObserver> observer; 
@property (nonatomic,readonly) long long fetchStatus; 
@property (nonatomic,readonly) NSNumber * countOfFamilyMemberContacts; 
@required
-(id<CNUICoreFamilyMemberContactsObserver>)observer;
-(long long)fetchStatus;
-(void)setObserver:(id)arg1;
-(NSNumber *)countOfFamilyMemberContacts;
-(void)updateListByAddingContacts:(id)arg1;
-(void)updateListByRemovingContacts:(id)arg1;

@end

