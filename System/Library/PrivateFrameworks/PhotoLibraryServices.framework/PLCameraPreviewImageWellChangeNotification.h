/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)notification;
-(NSString *)assetUUID;
-(id)init;
-(UIImage *)image;
-(id)object;
-(id)userInfo;
-(id)description;
-(id)_init;
-(id)name;
@end
