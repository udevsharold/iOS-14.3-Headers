/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDSpotlightItemUtils : NSObject
+(id)expectedUTIsForMechanism:(long long)arg1 ;
+(id)messageContextDictionaryForSendMessageIntent:(id)arg1 ;
+(id)interactionForSearchableItem:(id)arg1 ;
+(id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)expectedSupportedUTIs;
+(long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2 ;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2 ;
+(id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4 ;
+(id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2 ;
@end

