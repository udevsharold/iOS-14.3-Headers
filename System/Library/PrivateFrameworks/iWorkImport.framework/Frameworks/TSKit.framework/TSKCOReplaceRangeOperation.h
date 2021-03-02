/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKCOReplaceOperation.h>
#import <TSKit/TSKCORangeOperation.h>

@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation> {

	vector<_NSRange, std::__1::allocator<_NSRange> >* _rangeVector;
	BOOL _preserveLowerPriorityLocation;
	unsigned long long _insertLength;

}

@property (nonatomic,readonly) unsigned long long insertLength;                 //@synthesize insertLength=_insertLength - In the implementation block
@property (nonatomic,readonly) BOOL preserveLowerPriorityLocation;              //@synthesize preserveLowerPriorityLocation=_preserveLowerPriorityLocation - In the implementation block
@property (nonatomic,readonly) const vector<_NSRange* rangeVector; 
-(id)toString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)operationWithNewNoop:(BOOL)arg1 ;
-(shared_ptr<TSKCO::AbstractOperation>*)newTransformableOperation;
-(const vector<_NSRange*)rangeVector;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange> >*)arg2 insertLength:(unsigned long long)arg3 preserveLowerPriorityLocation:(BOOL)arg4 noop:(BOOL)arg5 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange> >*)arg2 insertLength:(unsigned long long)arg3 noop:(BOOL)arg4 ;
-(unsigned long long)insertLength;
-(BOOL)preserveLowerPriorityLocation;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange> >*)arg2 insertLength:(unsigned long long)arg3 ;
@end
