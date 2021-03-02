/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLAbstractObject;
@interface CPLPlatformObject : NSObject {

	id<CPLAbstractObject> _abstractObject;

}

@property (nonatomic,__weak,readonly) id<CPLAbstractObject> abstractObject;              //@synthesize abstractObject=_abstractObject - In the implementation block
-(id)init;
-(id)description;
-(id<CPLAbstractObject>)abstractObject;
-(id)initWithAbstractObject:(id)arg1 ;
@end
