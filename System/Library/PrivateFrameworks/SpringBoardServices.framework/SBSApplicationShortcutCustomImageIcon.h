/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon {

	BOOL _isTemplate;
	NSData* _imageData;
	long long _dataType;

}

@property (nonatomic,readonly) NSData * imageData;                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) long long dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) BOOL isTemplate;                    //@synthesize isTemplate=_isTemplate - In the implementation block
@property (nonatomic,readonly) NSData * imagePNGData; 
-(long long)dataType;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSData *)imageData;
-(unsigned long long)hash;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initForSubclass;
-(NSData *)imagePNGData;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 ;
-(id)initWithImagePNGData:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isTemplate;
@end
