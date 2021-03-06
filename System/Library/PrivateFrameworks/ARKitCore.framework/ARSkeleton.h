/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARSkeletonDefinition;

@interface ARSkeleton : NSObject {

	ARSkeletonDefinition* _definition;
	unsigned long long _jointCount;

}

@property (nonatomic,readonly) ARSkeletonDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) unsigned long long jointCount;                  //@synthesize jointCount=_jointCount - In the implementation block
-(id)initPrivate;
-(ARSkeletonDefinition *)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
@end

