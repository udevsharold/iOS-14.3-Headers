/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>

@class HKSample, HDSampleQueryDescription, NSArray, HKSortedQueryAnchor, NSSet, HDProfile, NSError, NSString;

@interface HDSortedSampleIterator : NSObject <HDSampleIterator> {

	HDSampleQueryDescription* _sampleQueryDescription;
	NSArray* _sortDescriptors;
	HKSortedQueryAnchor* _anchor;
	long long _bufferSize;
	NSSet* _restrictedSourceEntities;
	HDProfile* _profile;
	NSError* _lastError;
	BOOL _isComplete;
	vector<std::__1::tuple<long long, HKSample *>, std::__1::allocator<std::__1::tuple<long long, HKSample *> > >* _buffer;
	tuple<long long, HKSample *> _current;

}

@property (nonatomic,copy,readonly) HKSortedQueryAnchor * nextAnchor; 
@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)objectID;
-(id)init;
-(HKSample *)sample;
-(HKSortedQueryAnchor *)nextAnchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)advanceWithError:(id*)arg1 ;
-(BOOL)_queryForNextPageIfNecessaryWithError:(id*)arg1 ;
-(id)object;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSampleQueryDescription:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5 ;
@end

