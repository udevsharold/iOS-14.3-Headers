/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(id)data;
-(id)thumbnail;
-(void)setThumbnailProvider:(id)arg1 ;
-(id)thumbnailProvider;
-(void)setDataProvider:(id)arg1 ;
-(id)dataProvider;
@end
