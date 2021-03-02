/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class NSFileProviderDomain, NSString;

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {

	NSFileProviderDomain* _domain;
	NSString* _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDomain:(id)arg1 ;
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(id)initWithDomain:(id)arg1 provider:(id)arg2 ;
-(void)invalidate;
@end
