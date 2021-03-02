/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	BOOL cameraSwitching;
	CGRect contentsRect;
	BOOL videoSourceScreen;
	BOOL videoMirrored;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) BOOL cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
@property (assign,nonatomic) BOOL videoSourceScreen; 
@property (assign,nonatomic) BOOL videoMirrored; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
+(int)videoAttributeCameraForCameraUID:(id)arg1 ;
+(id)cameraUIDForVideoAttributeCamera:(int)arg1 ;
-(int)camera;
-(CGSize)ratio;
-(void)setCamera:(int)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(BOOL)cameraSwitching;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(BOOL)videoMirrored;
-(void)setOrientation:(int)arg1 ;
-(void)setVideoSourceScreen:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToVideoAttributes:(id)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(int)orientation;
-(id)description;
-(BOOL)videoSourceScreen;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(void)setCameraSwitching:(BOOL)arg1 ;
-(id)copyEncodedDictionary;
-(void)setRatio:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
