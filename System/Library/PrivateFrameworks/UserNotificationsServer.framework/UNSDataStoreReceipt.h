/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UNSDataStoreReceipt : NSObject {

	NSArray* _addedObjects;
	NSArray* _replacedObjects;
	NSArray* _replacementObjects;
	NSArray* _removedObjects;

}

@property (nonatomic,readonly) NSArray * addedObjects;                    //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacedObjects;                 //@synthesize replacedObjects=_replacedObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacementObjects;              //@synthesize replacementObjects=_replacementObjects - In the implementation block
@property (nonatomic,readonly) NSArray * removedObjects;                  //@synthesize removedObjects=_removedObjects - In the implementation block
+(id)receiptWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
-(NSArray *)replacedObjects;
-(NSArray *)replacementObjects;
-(id)initWithAddedObjects:(id)arg1 replacedObjects:(id)arg2 replacementObjects:(id)arg3 removedObjects:(id)arg4 ;
-(NSArray *)addedObjects;
-(BOOL)hasChanges;
-(NSArray *)removedObjects;
@end

