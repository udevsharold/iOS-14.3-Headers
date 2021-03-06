/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding> {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	BOOL _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) BOOL isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsFastCountable:(BOOL)arg1 ;
-(void)dealloc;
-(id)persistentIDProperty;
-(BOOL)hasEntities;
-(NSString *)foreignPersistentIDProperty;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)entityClass;
-(BOOL)isFastCountable;
-(unsigned long long)countOfEntities;
-(Class)aggregateEntityClass;
-(void)encodeWithCoder:(id)arg1 ;
@end

