/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JasperDepth/JasperDepth-Structs.h>
@class NSData, NSDictionary;

@interface JDCloudColorCalibrationDebugData : NSObject {

	unsigned _debugPointCloudSize;
	CVBufferRef _debugImage;
	NSData* _debugPointCloud;
	NSDictionary* _debugDict;

}

@property (nonatomic,readonly) CVBufferRef debugImage;                    //@synthesize debugImage=_debugImage - In the implementation block
@property (nonatomic,readonly) NSData * debugPointCloud;                  //@synthesize debugPointCloud=_debugPointCloud - In the implementation block
@property (nonatomic,readonly) unsigned debugPointCloudSize;              //@synthesize debugPointCloudSize=_debugPointCloudSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * debugDict;                  //@synthesize debugDict=_debugDict - In the implementation block
-(void)dealloc;
-(CVBufferRef)debugImage;
-(id)initWithDebugImage:(CVBufferRef)arg1 pointCloud:(id)arg2 pointCloudSize:(unsigned)arg3 ;
-(NSData *)debugPointCloud;
-(unsigned)debugPointCloudSize;
-(NSDictionary *)debugDict;
@end
