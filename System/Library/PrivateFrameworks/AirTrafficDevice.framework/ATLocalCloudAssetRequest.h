/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject {

	ATAsset* _asset;
	NSFileHandle* _fileHandle;
	double _startTime;

}

@property (nonatomic,retain) ATAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

