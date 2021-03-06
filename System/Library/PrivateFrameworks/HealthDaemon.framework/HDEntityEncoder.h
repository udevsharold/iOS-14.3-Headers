/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDDatabaseTransaction, HDSQLiteDatabase, NSDictionary;

@interface HDEntityEncoder : NSObject {

	HDProfile* _profile;
	HDDatabaseTransaction* _transaction;
	HDSQLiteDatabase* _database;
	Class _entityClass;
	NSDictionary* _encodingOptions;
	/*^block*/id _authorizationFilter;
	long long _purpose;
	HDEntityEncoder* _superclassEncoder;

}

@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDDatabaseTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * encodingOptions;              //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                      //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,readonly) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) HDEntityEncoder * superclassEncoder;              //@synthesize superclassEncoder=_superclassEncoder - In the implementation block
+(long long)estimatedEncodedSize;
-(void)finish;
-(HDSQLiteDatabase *)database;
-(long long)purpose;
-(HDProfile *)profile;
-(id)authorizationFilter;
-(BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 error:(id*)arg4 ;
-(BOOL)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(NSDictionary *)encodingOptions;
-(id)orderedProperties;
-(Class)entityClass;
-(id)createBareObject;
-(HDDatabaseTransaction *)transaction;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 transaction:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(HDEntityEncoder *)superclassEncoder;
-(id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(/*^block*/id)arg6 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
@end

