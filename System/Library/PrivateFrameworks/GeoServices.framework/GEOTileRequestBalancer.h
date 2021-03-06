/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@class NSString;

@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing> {

	void* _requesters;
	void* _randomIndexGenerator;
	unsigned long long _maxRunningOperationsCount;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)maxRunningOperationsCount;
+(void)setMaxRunningOperationsCount:(unsigned long long)arg1 ;
+(id)balancerForRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
-(void)requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(void)_startOperations;
-(id)init;
-(void)_requester:(id)arg1 removeTileKey:(GEOTileKey)arg2 ;
-(void)dealloc;
-(void)_requester:(id)arg1 updateRunningOperationsCount:(unsigned long long)arg2 ;
-(id)_initWithMaxRunningOperationsCount:(unsigned long long)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)_startOperationsWithAvailableCount:(unsigned long long)arg1 ;
-(vector<(anonymous namespace)::RequesterTileKeys, std::__1::allocator<(anonymous namespace)::RequesterTileKeys> >*)requesters;
-(_wrap_iter<(anonymous namespace)::RequesterTileKeys *>*)_next_requester;
-(void)requester:(id)arg1 removeTileKey:(const GEOTileKey*)arg2 ;
-(void)requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(void)removeRequester:(id)arg1 ;
-(void)_pruneEmptyRequesters;
-(void)_requester:(id)arg1 incrementRunningOperationsCount:(unsigned long long)arg2 ;
-(void)_addRequester:(id)arg1 tileKeys:(id)arg2 priorities:(id)arg3 ;
-(void)_removeRequester:(id)arg1 ;
-(void)_requester:(id)arg1 updatePriority:(unsigned)arg2 tileKey:(GEOTileKey)arg3 ;
@end

