/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSAvocadoDescriptorProviderObserver.h>

@class CHSAvocadoDescriptorProvider, NSString, _PASSimpleCoalescingTimer, NSDictionary, NSSet;

@interface ATXAvocadoDescriptorCache : NSObject <CHSAvocadoDescriptorProviderObserver> {

	CHSAvocadoDescriptorProvider* _avocadoDescriptorProvider;
	NSString* _descriptorsWithAdditionalDataPath;
	_PASSimpleCoalescingTimer* _coalescedDescriptorUpdateOperation;
	NSDictionary* _intentToDescriptorDictionary;
	NSSet* _descriptors;

}

@property (nonatomic,copy,readonly) NSSet * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)descriptorsDidChangeForAvocadoDescriptorProvider:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSSet *)descriptors;
-(id)init;
-(void)_createIntentToDescriptorDictionary;
-(void)_markMissingAvocadoDescriptorsAsUninstalled:(id)arg1 ;
-(id)_appBundleIdForExtensionBundleId:(id)arg1 ;
-(void)dealloc;
-(void)_descriptorsDidUpdate;
-(id)descriptorForIntent:(id)arg1 ;
-(id)fetchAvocadoDescriptorsWithAdditionalDataWithError:(id*)arg1 ;
-(BOOL)removeDeletedItemsFromAdditionalDataCache;
-(id)_updateAvocadoDescriptorsWithAdditionalData;
-(BOOL)_writeAvocadoDescriptorsWithAdditionalData:(id)arg1 withError:(id*)arg2 ;
-(void)_writeNewAvocadoDescriptorsIfNecessary:(id)arg1 oldAvocadoDescriptors:(id)arg2 ;
-(id)_mergeNewDescriptorsWithOldDescriptors:(id)arg1 ;
@end
