/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface LSDatabaseContext : NSObject

@property (getter=isAccessing,readonly) BOOL accessing; 
@property (readonly) NSData * currentPersistentIdentifier; 
+(id)new;
+(id)sharedDatabaseContext;
-(BOOL)isAccessing;
-(void)stopAccessing;
-(BOOL)startAccessingWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)removeDatabaseChangeObserver4WebKit:(id)arg1 ;
-(void)accessWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addDatabaseChangeObserver4WebKit:(/*^block*/id)arg1 ;
-(void)accessUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)startAccessingWithUserID:(unsigned)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)accessWithUserID:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)startAccessingReturningError:(id*)arg1 ;
-(void)observeDatabaseChange4WebKit:(id)arg1 ;
-(void)accessWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSData *)currentPersistentIdentifier;
-(id)init;
-(id)_init;
@end

