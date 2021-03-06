/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDBackingStoreTransactionOptions, HMDBackingStore, NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject <HMFLogging> {

	BOOL _committed;
	HMDBackingStoreTransactionOptions* _options;
	HMDBackingStore* _backingStore;
	NSMutableArray* _objects;

}

@property (assign,nonatomic,__weak) HMDBackingStore * backingStore;                      //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                   //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) BOOL committed;                                             //@synthesize committed=_committed - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreTransactionOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)sort:(id)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(HMDBackingStore *)backingStore;
-(void)add:(id)arg1 ;
-(void)run;
-(void)save;
-(void)run:(/*^block*/id)arg1 ;
-(BOOL)committed;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(NSString *)description;
-(void)setCommitted:(BOOL)arg1 ;
-(void)addObjects:(id)arg1 ;
-(id)logIdentifier;
-(NSMutableArray *)objects;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(id)debugString:(BOOL)arg1 ;
-(HMDBackingStoreTransactionOptions *)options;
-(void)dumpDebug:(id)arg1 ;
-(void)dumpDebug;
-(void)add:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 options:(id)arg2 label:(id)arg3 ;
-(void)runWithoutSave:(/*^block*/id)arg1 ;
@end

