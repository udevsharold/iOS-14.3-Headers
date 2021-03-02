/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSBatchDeleteRequest : NSPersistentStoreRequest {

	unsigned long long _resultType;
	NSFetchRequest* _deleteTarget;
	long long _flags;

}

@property (assign) unsigned long long resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (copy,readonly) NSFetchRequest * fetchRequest; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(unsigned long long)requestType;
-(BOOL)_secureOperation;
-(BOOL)shouldPerformSecureOperation;
-(id)encodeForXPC;
-(void)setResultType:(unsigned long long)arg1 ;
-(unsigned long long)resultType;
-(NSFetchRequest *)fetchRequest;
-(id)initWithObjectIDs:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
