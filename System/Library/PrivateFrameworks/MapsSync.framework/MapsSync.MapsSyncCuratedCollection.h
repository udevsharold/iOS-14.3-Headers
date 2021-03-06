/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@interface MapsSync.MapsSyncCuratedCollection : MapsSync.MapsSyncBaseItem {

	 _curatedCollectionIdentifier;
	 _resultProviderIdentifier;

}

@property (readonly,nonatomic) long long identifierHash; 
@property (readonly,nonatomic) unsigned long long curatedCollectionIdentifier; 
@property (readonly,nonatomic) int resultProviderIdentifier; 
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2 ;
-(unsigned long long)curatedCollectionIdentifier;
-(id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 ;
-(long long)identifierHash;
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(Class)managedObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(int)resultProviderIdentifier;
@end

