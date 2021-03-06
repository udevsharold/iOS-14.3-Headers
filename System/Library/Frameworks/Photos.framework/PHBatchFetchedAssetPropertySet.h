/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHBatchFetchedPropertySet.h>

@class NSManagedObjectID, NSKnownKeysDictionary, NSString;

@interface PHBatchFetchedAssetPropertySet : NSObject <PHBatchFetchedPropertySet> {

	NSManagedObjectID* _objectID;
	NSKnownKeysDictionary* _knownKeysDictionary;

}

@property (nonatomic,readonly) NSKnownKeysDictionary * knownKeysDictionary;              //@synthesize knownKeysDictionary=_knownKeysDictionary - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cacheSize;
+(id)entityName;
+(BOOL)useObjectFetchingContext;
+(id)fetchType;
+(long long)batchSize;
+(id)propertiesToFetch;
+(BOOL)useNoIndexSelf;
+(id)propertiesToSortBy;
-(NSManagedObjectID *)objectID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 photoLibrary:(id)arg3 ;
-(NSKnownKeysDictionary *)knownKeysDictionary;
@end

