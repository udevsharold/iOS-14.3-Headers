/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIFaceCrop;

@interface HMIStoreFaceCropOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIFaceCrop* _faceCrop;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIFaceCrop * faceCrop;                                     //@synthesize faceCrop=_faceCrop - In the implementation block
+(id)logCategory;
-(void)main;
-(HMIFaceCrop *)faceCrop;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 faceCrop:(id)arg2 ;
@end
