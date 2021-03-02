/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, CNCDPersistenceContext;

@interface CNCDAccountFetcher : NSObject {

	NSPredicate* _predicate;
	CNCDPersistenceContext* _persistenceContext;

}

@property (nonatomic,readonly) NSPredicate * predicate;                                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) CNCDPersistenceContext * persistenceContext;              //@synthesize persistenceContext=_persistenceContext - In the implementation block
+(id)accountsForPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSPredicate *)predicate;
-(id)fetchAccounts:(id*)arg1 ;
-(id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2 ;
-(CNCDPersistenceContext *)persistenceContext;
@end
