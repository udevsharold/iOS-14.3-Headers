/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying> {

	unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > >* _map;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(BOOL)setObjectLocation:(ObjectLocation)arg1 forUUID:(id)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPersistedObjectUUIDMap:(id)arg1 ;
-(id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3 ;
-(id)initWithComponentsDictionary:(id)arg1 isLoadingDocument:(BOOL)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(ObjectLocation)objectLocationForUUID:(id)arg1 ;
-(void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(BOOL)arg5 delegate:(id)arg6 ;
-(void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5 ;
@end
