/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HMITask.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIPersonFaceCrop;

@interface HMIFaceMisclassificationTask : HMITask {

	HMIPersonFaceCrop* _faceCrop;
	id<HMIHomePersonManagerDataSource> _dataSource;

}

@property (readonly) HMIPersonFaceCrop * faceCrop;                               //@synthesize faceCrop=_faceCrop - In the implementation block
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)logCategory;
-(void)main;
-(HMIPersonFaceCrop *)faceCrop;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(id)initWithTaskID:(int)arg1 dataSource:(id)arg2 faceCrop:(id)arg3 ;
-(void)removeNearestFaceprint:(id)arg1 withFaceCrops:(id)arg2 ;
@end

