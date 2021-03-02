/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _ICQPhotosInfo : NSObject {

	unsigned long long _photoCount;
	unsigned long long _videoCount;

}

@property (assign,nonatomic) unsigned long long photoCount;              //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
+(id)mockCount:(id)arg1 ;
+(void)getInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setPhotoCount:(unsigned long long)arg1 ;
-(unsigned long long)videoCount;
-(void)setVideoCount:(unsigned long long)arg1 ;
-(unsigned long long)photoCount;
@end
