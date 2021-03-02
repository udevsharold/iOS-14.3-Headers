/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRequest : NSObject {

	BOOL _useCPUOnly;
	unsigned _revision;
	int _width;
	int _height;
	int _maxNumHands;
	int _humanActionWindowSize;

}

@property (nonatomic,readonly) BOOL useCPUOnly;                //@synthesize useCPUOnly=_useCPUOnly - In the implementation block
@property (nonatomic,readonly) unsigned revision;              //@synthesize revision=_revision - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(unsigned)revision;
-(BOOL)useCPUOnly;
-(id)init;
-(unsigned)preferredPixelFormat;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateWithOptions:(id)arg1 error:(id*)arg2 ;
@end
