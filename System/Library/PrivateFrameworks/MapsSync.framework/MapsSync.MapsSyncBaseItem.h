/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncObjectWrapper.h>

@class NSUUID, NSDate, NSManagedObjectContext, NSString;

@interface MapsSync.MapsSyncBaseItem : MapsSync.MapsSyncObjectWrapper {

	??? _identifier;
	??? _createTime;
	??? _modificationTime;
	 _positionIndex;
	 _editBlocks;
	 _readContext;
	??? _saveObjectSignpost;

}

@property (copy,nonatomic) NSUUID * _identifier; 
@property (copy,nonatomic) NSDate * _createTime; 
@property (copy,nonatomic) NSDate * _modificationTime; 
@property (assign,nonatomic) long long _positionIndex;                           //@synthesize positionIndex=_positionIndex - In the implementation block
@property (retain,nonatomic) NSManagedObjectContext * _readContext;              //@synthesize readContext=_readContext - In the implementation block
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSUUID * identifier; 
@property (readonly,nonatomic) NSDate * createTime; 
@property (readonly,nonatomic) NSDate * modificationTime; 
@property (readonly,nonatomic) long long positionIndex; 
+(id)_queue;
+(id)_callbackQueue;
-(NSDate *)_createTime;
-(id)validate;
-(NSUUID *)_identifier;
-(id)init;
-(id)copyWithZone:(void*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(NSDate *)createTime;
-(NSDate *)_modificationTime;
-(NSUUID *)identifier;
-(Class)mutableObjectClass;
-(NSString *)description;
-(long long)positionIndex;
-(BOOL)isDuplicateOfOther:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(void)set_identifier:(NSUUID *)arg1 ;
-(void)set_createTime:(NSDate *)arg1 ;
-(void)set_modificationTime:(NSDate *)arg1 ;
-(long long)_positionIndex;
-(void)set_positionIndex:(long long)arg1 ;
-(NSManagedObjectContext *)_readContext;
-(void)set_readContext:(NSManagedObjectContext *)arg1 ;
-(void)setReadContextWithContext:(id)arg1 ;
-(void)persistObject:(id)arg1 saveContext:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(id)mutableObject:(id)arg1 ;
-(Class)managedObjectClass;
-(id)performEditsWithoutSavingWithCompletion:(/*^block*/id)arg1 ;
-(id)callCleanInObjc:(id)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(NSDate *)modificationTime;
@end

