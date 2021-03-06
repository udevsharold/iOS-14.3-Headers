/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentStoreCache : NSObject {

	id _externalData;
	unsigned long long _capacity;
	SCD_Struct_NS18* _externalDataValueCallbacks;
	struct {
		unsigned _preserveToManyRelationships : 1;
		unsigned _reserved : 31;
	}  _persistentStoreCacheFlags;
	os_unfair_lock_s _lock;

}
+(void)initialize;
-(id)rowForObjectID:(id)arg1 afterTimestamp:(double)arg2 ;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 andTimestamp:(double)arg5 ;
-(id)init;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(void)registerRow:(id)arg1 forObjectID:(id)arg2 ;
-(void)_createExternalDataDictWithValueCallbacks:(void*)arg1 ;
-(void)dealloc;
-(void)incrementRefCountForObjectID:(id)arg1 ;
-(id)initWithValueCallbacks:(void*)arg1 preserveToManyRelationships:(BOOL)arg2 ;
-(void)_registerRow:(id)arg1 forObjectID:(id)arg2 options:(unsigned)arg3 ;
-(id)rowForObjectID:(id)arg1 ;
-(void)forgetRowForObjectID:(id)arg1 ;
-(int)refCountForObjectID:(id)arg1 ;
-(id)ancillaryOrderKeysForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)forgetAllExternalData;
-(id)toManyInformationForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)_forgetRowForObjectID:(id)arg1 ;
-(id)initWithPersistentStore:(id)arg1 ;
-(unsigned long long)allCachedRowsCount;
-(void)decrementRefCountForObjectID:(id)arg1 ;
-(void)growRegistrationCollectionTo:(unsigned long long)arg1 ;
-(void)registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
-(id)toManyForSourceObjectID:(id)arg1 forProperty:(id)arg2 afterTimestamp:(double)arg3 ;
-(void)_registerToMany:(id)arg1 withOrderKeys:(id)arg2 forSourceObjectID:(id)arg3 forProperty:(id)arg4 options:(unsigned)arg5 andTimestamp:(double)arg6 ;
@end

