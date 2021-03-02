/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment {

	BOOL _enabled;
	NSString* _maskUUID;
	NSDictionary* _autoSettings;

}

@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * maskUUID;                      //@synthesize maskUUID=_maskUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * autoSettings;              //@synthesize autoSettings=_autoSettings - In the implementation block
-(NSString *)maskUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(NSDictionary *)autoSettings;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_debugDescriptionSuffix;
-(void)setMaskUUID:(NSString *)arg1 ;
-(void)setAutoSettings:(NSDictionary *)arg1 ;
@end
