/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSString;

@interface ATAirlock : NSObject {

	NSFileManager* _fm;
	NSString* _basePath;

}
+(id)sharedInstance;
-(id)init;
-(void)purgeAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 ;
-(id)pathForDataclass:(id)arg1 ;
-(id)lyricsPathForDataclass:(id)arg1 lyricsIdentifier:(id)arg2 ;
-(id)geniusPathForDataclass:(id)arg1 geniusIdentifier:(id)arg2 ;
-(void)createAirlockForDataclasses:(id)arg1 ;
-(void)evacuateDataclasses:(id)arg1 ;
-(void)processCompletedAsset:(id)arg1 ;
-(id)artworkPathForDataclass:(id)arg1 artworkIdentifier:(id)arg2 ;
-(void)copyAssetToAirlock:(id)arg1 ;
-(void)evacuate;
-(id)pathForAsset:(id)arg1 withDataclass:(id)arg2 ;
@end

