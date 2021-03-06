/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPFaceDetectionRange : NSObject {

	unsigned long long _flags;
	unsigned long long _position;
	unsigned long long _faceID;
	SCD_Struct_VC6 _start;
	SCD_Struct_VC6 _last;
	CGRect _bounds;

}

@property (assign) SCD_Struct_VC6 start;                     //@synthesize start=_start - In the implementation block
@property (assign) SCD_Struct_VC6 last;                      //@synthesize last=_last - In the implementation block
@property (assign) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (assign) CGRect bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign) unsigned long long faceID;                //@synthesize faceID=_faceID - In the implementation block
-(void)setStart:(SCD_Struct_VC6)arg1 ;
-(unsigned long long)faceID;
-(CGRect)bounds;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setLast:(SCD_Struct_VC6)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)position;
-(SCD_Struct_VC6)last;
-(SCD_Struct_VC6)start;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)setFaceID:(unsigned long long)arg1 ;
@end

