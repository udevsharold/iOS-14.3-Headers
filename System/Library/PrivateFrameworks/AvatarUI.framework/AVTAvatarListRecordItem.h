/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTAvatarListItem.h>

@protocol AVTAvatarRecord;
@class UIImage, NSString;

@interface AVTAvatarListRecordItem : NSObject <AVTAvatarListItem> {

	id<AVTAvatarRecord> _avatar;
	UIImage* _cachedImage;

}

@property (nonatomic,readonly) id<AVTAvatarRecord> avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic,__weak) UIImage * cachedImage;              //@synthesize cachedImage=_cachedImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AVTAvatarRecord>)avatar;
-(void)setCachedImage:(UIImage *)arg1 ;
-(unsigned long long)hash;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 imageHandler:(/*^block*/id)arg2 viewHandler:(/*^block*/id)arg3 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 viewHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)cachedImage;
-(id)initWithAvatar:(id)arg1 ;
@end
