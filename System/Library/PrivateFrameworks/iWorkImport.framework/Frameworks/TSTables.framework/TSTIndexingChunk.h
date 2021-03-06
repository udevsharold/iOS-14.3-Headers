/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@interface TSTIndexingChunk : NSObject {

	UUIDData<TSP::UUIDData> _tableUID;
	vector<std::__1::vector<NSString *, std::__1::allocator<NSString *> >, std::__1::allocator<std::__1::vector<NSString *, std::__1::allocator<NSString *> > > >* _wordFragmentsList;
	vector<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord> > >* _headerCoords;

}

@property (nonatomic,readonly) UUIDData<TSP::UUIDData> tableUID;              //@synthesize tableUID=_tableUID - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
-(unsigned long long)size;
-(UUIDData<TSP::UUIDData>)tableUID;
-(id)initWithTableUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(const vector<std::__1::vector<NSString *, std::__1::allocator<NSString *> >, std::__1::allocator<std::__1::vector<NSString *, std::__1::allocator<NSString *> > > >*)wordFragmentsList;
-(const vector<TSU::UUIDCoord<TSP::UUIDCoord>, std::__1::allocator<TSU::UUIDCoord<TSP::UUIDCoord> > >*)headerCoords;
-(void)addHeaderWordFragments:(const vector<NSString *, std::__1::allocator<NSString *> >Ref)arg1 atCoord:(const UUIDCoord<TSP::UUIDCoord>*)arg2 ;
@end

