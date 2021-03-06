/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet, NSDictionary;

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSIndexSet* _whitelistedFCKinds;
	NSDictionary* _storeBagDictionary;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)catalogURLWithStoreBagDictionary:(id)arg1 ;
-(id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3 ;
-(id)additionalCatalogURLQueryItems;
-(id)additionalURLRequestsWithStoreBagDictionary:(id)arg1 ;
-(id)groupingNameBagKey;
-(id)groupingNameWithMusicSubscriptionDictionary:(id)arg1 ;
-(id)rootObjectIdentifierWithSubscriptionStatus:(long long)arg1 ;
@end

