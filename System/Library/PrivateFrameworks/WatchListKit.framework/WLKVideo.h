/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKArtworkVariantListing, WLKVideoAsset;

@interface WLKVideo : NSObject {

	NSString* _ID;
	NSString* _externalID;
	NSString* _title;
	unsigned long long _duration;
	WLKArtworkVariantListing* _images;
	WLKVideoAsset* _asset;

}

@property (nonatomic,copy,readonly) NSString * ID;                             //@synthesize ID=_ID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;              //@synthesize images=_images - In the implementation block
@property (nonatomic,readonly) WLKVideoAsset * asset;                          //@synthesize asset=_asset - In the implementation block
+(id)videosWithDictionaries:(id)arg1 ;
-(NSString *)ID;
-(WLKVideoAsset *)asset;
-(WLKArtworkVariantListing *)images;
-(NSString *)externalID;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)duration;
-(NSString *)title;
@end

