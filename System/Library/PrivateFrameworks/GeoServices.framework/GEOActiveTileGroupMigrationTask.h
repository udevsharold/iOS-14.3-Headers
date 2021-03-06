/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOActiveTileGroupMigrationTaskOptions;


@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction; 
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options; 
@optional
-(id)stateWithHints:(os_state_hints_s*)arg1;

@required
-(long long)estimatedWeight;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)setTransaction:(id)arg1;
-(void)cancel;
-(void)setOptions:(id)arg1;
-(void)populateTileGroup:(id)arg1;
-(id<NSObject>)transaction;
-(void)removeOldData:(id)arg1;
-(GEOActiveTileGroupMigrationTaskOptions *)options;

@end

