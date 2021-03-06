/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ENAuthCacheEntry;

@interface ENAuthCache : NSObject {

	NSMutableDictionary* _linkedCache;
	ENAuthCacheEntry* _businessCache;

}

@property (nonatomic,retain) NSMutableDictionary * linkedCache;              //@synthesize linkedCache=_linkedCache - In the implementation block
@property (nonatomic,retain) ENAuthCacheEntry * businessCache;               //@synthesize businessCache=_businessCache - In the implementation block
-(id)init;
-(void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2 ;
-(id)authenticationResultForLinkedNotebookGuid:(id)arg1 ;
-(void)setAuthenticationResultForBusiness:(id)arg1 ;
-(id)authenticationResultForBusiness;
-(NSMutableDictionary *)linkedCache;
-(void)setLinkedCache:(NSMutableDictionary *)arg1 ;
-(ENAuthCacheEntry *)businessCache;
-(void)setBusinessCache:(ENAuthCacheEntry *)arg1 ;
@end

