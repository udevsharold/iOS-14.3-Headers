/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelForYouRecommendationItemBuilder, NSDateFormatter, MPPropertySet, NSDictionary, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationGroupBuilder : NSObject {

	SCD_Struct_MP64 _requestedGroupProperties;
	MPModelForYouRecommendationItemBuilder* _itemBuilder;
	NSDateFormatter* _lastUpdatedDateFormatter;
	MPPropertySet* _requestedGroupPropertySet;
	MPPropertySet* _requestedItemPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedGroupPropertySet;                      //@synthesize requestedGroupPropertySet=_requestedGroupPropertySet - In the implementation block
@property (nonatomic,readonly) MPPropertySet * requestedItemPropertySet;                       //@synthesize requestedItemPropertySet=_requestedItemPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedGroupProperties;
+(id)allSupportedItemProperties;
-(id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4 ;
-(MPPropertySet *)requestedGroupPropertySet;
-(id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedItemPropertySet;
-(NSDictionary *)storeItemMetadataResults;
-(MPMutableSectionedCollection *)flatSectionedItems;
@end

